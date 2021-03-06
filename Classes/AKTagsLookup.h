//
//  AKTagsLookup.h
//
//  Created by Andrey Kadochnikov on 30.05.14.
//  Copyright (c) 2014 Andrey Kadochnikov. All rights reserved.
//

@class AKTagsLookup;

@protocol AKTagsLookupDelegate <NSObject>

-(void)tagsLookup:(AKTagsLookup*)lookup didSelectTag:(NSString*)tag;

@end

@interface AKTagsLookup : UIView

@property (nonatomic, weak) id<AKTagsLookupDelegate> delegate;
@property (strong, nonatomic) NSMutableArray *tagsBase;

-(id)initWithTags:(NSArray*)tags;
-(void)filterLookupWithPredicate:(NSPredicate*)predicate;

@end
