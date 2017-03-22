/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylistEndAction.h>

@protocol IKJSPlaylistEndAction <JSExport>
@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
@required
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;

@end


@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
-(id)init;
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;
@end

