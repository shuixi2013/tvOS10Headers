/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {

	BOOL _substitutePK;

}

@property (assign,nonatomic) BOOL substitutePK;              //@synthesize substitutePK=_substitutePK - In the implementation block
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(BOOL)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(BOOL)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5 ;
-(id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5 ;
-(BOOL)substitutePK;
-(void)setSubstitutePK:(BOOL)arg1 ;
@end

