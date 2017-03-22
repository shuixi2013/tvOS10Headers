/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteFetchDelegate <NSObject>
@optional
-(void)autocompleteFetchDidFinish:(id)arg1;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1;

@required
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;

@end

