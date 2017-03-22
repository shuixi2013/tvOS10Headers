/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SCNActionRunBlock : SCNAction {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)supportsSecureCoding;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
-(BOOL)isCustom;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
@end
