/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSString;

@interface MCActionTrigger : MCAction {

	NSString* _actionKey;

}

@property (copy) NSString * actionKey;              //@synthesize actionKey=_actionKey - In the implementation block
+(id)actionTriggerForTargetPlugObjectID:(id)arg1 withActionKey:(id)arg2 ;
-(id)description;
-(NSString *)actionKey;
-(void)setActionKey:(NSString *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

