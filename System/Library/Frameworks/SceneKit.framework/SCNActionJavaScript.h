/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSString;

@interface SCNActionJavaScript : SCNAction {

	NSString* _script;

}
+(id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)parameters;
-(id)reversedAction;
-(BOOL)isCustom;
@end

