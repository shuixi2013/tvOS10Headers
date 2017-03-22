/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface _GEOLocationShiftLocation : NSObject {

	SCD_Struct_GE26 _coordinate;
	double _accuracy;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _mustGoToNetworkCallback;
	/*^block*/id _functionHandler;
	CFRunLoopRef _runLoop;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _recordCacheInfo;

}

@property (nonatomic,readonly) SCD_Struct_GE26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double accuracy;                         //@synthesize accuracy=_accuracy - In the implementation block
-(void)dealloc;
-(SCD_Struct_GE26)coordinate;
-(void)performMustGoToNetwork;
-(void)performCompletionHandlerWithShiftedCoordinate:(SCD_Struct_GE26)arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(BOOL)arg4 ;
-(double)accuracy;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 functionHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 callbackQueue:(id)arg4 ;
-(id)_initWithCoordinate:(SCD_Struct_GE26)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 ;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackRunLoop:(CFRunLoopRef)arg6 ;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)_performOnCallbackQueue:(/*^block*/id)arg1 ;
-(void)performErrorHandler:(id)arg1 ;
@end

