/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSString, MCAction;

@interface MCConditionalAction : MCAction {

	NSString* _predicate;
	MCAction* _actionIfTrue;
	MCAction* _actionIfFalse;

}

@property (copy) NSString * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (retain) MCAction * actionIfTrue;               //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (retain) MCAction * actionIfFalse;              //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalActionWithPredicate:(id)arg1 ;
+(id)conditionalActionWithPredicate:(id)arg1 actionIfTrue:(id)arg2 actionIfFalse:(id)arg3 ;
-(id)description;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(MCAction *)actionIfTrue;
-(MCAction *)actionIfFalse;
-(void)setActionIfTrue:(MCAction *)arg1 ;
-(void)setActionIfFalse:(MCAction *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)setTransitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 forCondition:(BOOL)arg3 ;
-(id)setAnimationTriggerForTargetPlugObjectID:(id)arg1 withAnimationKey:(id)arg2 forCondition:(BOOL)arg3 ;
-(id)setGenericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2 forCondition:(BOOL)arg3 ;
-(id)setActionGroupForCondition:(BOOL)arg1 ;
-(id)setConditionalActionWithPredicate:(id)arg1 forCondition:(BOOL)arg2 ;
@end

