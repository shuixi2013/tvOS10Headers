/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@interface OFReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFiRef;

}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(BOOL)connectionRequired;
-(long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)_networkStatusForFlags:(unsigned)arg1 ;
-(long long)currentNetworkStatus;
@end

