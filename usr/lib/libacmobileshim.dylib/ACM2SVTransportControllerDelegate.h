/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACM2SVTransportControllerDelegate <NSObject>
@optional
-(void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(/*^block*/id)arg3;
-(void)twoSVTransportControllerCancelFetchingImages:(id)arg1;

@required
-(void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

