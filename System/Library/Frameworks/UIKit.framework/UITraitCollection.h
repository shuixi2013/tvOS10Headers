/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_UI101 _builtinTraits;
	NSDictionary* _clientDefinedTraits;

}

@property (nonatomic,readonly) long long barMetrics; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long forceTouchCapability; 
@property (nonatomic,copy,readonly) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) long long displayGamut; 
+(id)traitCollectionWithUserInterfaceStyle:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithForceTouchCapability:(long long)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_emptyTraitCollection;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)traitCollectionWithLayoutDirection:(long long)arg1 ;
+(id)traitCollectionWithDisplayGamut:(long long)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithPreferredContentSizeCategory:(id)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
+(id)traitCollectionWithBarMetrics:(long long)arg1 ;
+(id)traitCollectionWithBarPosition:(long long)arg1 ;
-(long long)userInterfaceIdiom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)verticalSizeClass;
-(long long)userInterfaceStyle;
-(NSString *)preferredContentSizeCategory;
-(long long)horizontalSizeClass;
-(unsigned long long)primaryInteractionModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)layoutDirection;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI101*)arg1 clientDefinedTraits:(id)arg2 ;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(double)displayScale;
-(long long)displayGamut;
-(long long)barMetrics;
-(long long)barPosition;
-(unsigned long long)interactionModel;
-(BOOL)_changedContentSizeCategoryFromTraitCollection:(id)arg1 ;
-(long long)forceTouchCapability;
-(long long)_compare:(id)arg1 ;
-(id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2 ;
-(id)_valueForTraitNamed:(id)arg1 ;
-(id)_namedImageDescription;
-(BOOL)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(long long)touchLevel;
@end

