/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVNowPlayingInfoPanelNavigationDelegate <NSObject>
@required
-(unsigned long long)numberOfFramesForPanel:(id)arg1;
-(id)panel:(id)arg1 imageForFrameIndex:(unsigned long long)arg2;
-(id)panel:(id)arg1 imageProxyForFrameIndex:(unsigned long long)arg2;
-(id)panel:(id)arg1 titleForFrame:(unsigned long long)arg2;
-(void)panel:(id)arg1 didSelectFrameIndex:(unsigned long long)arg2;

@end

