/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTunnelLocationProjectorDelegate;
#import <Navigation/Navigation-Structs.h>
@class NSTimer, MNLocation, NSDate;

@interface MNTunnelLocationProjector : NSObject {

	id<MNTunnelLocationProjectorDelegate> _delegate;
	NSTimer* _locationUpdateOverdueTimer;
	MNLocation* _lastLocation;
	NSDate* _lastLocationDate;
	double _locationOverdueTimeoutForTunnel;
	double _locationOverdueTimeoutForNotTunnel;
	double _locationOverdueTimeoutForUnknown;
	BOOL _isProjecting;

}

@property (assign,nonatomic,__weak) id<MNTunnelLocationProjectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isProjecting;                                                //@synthesize isProjecting=_isProjecting - In the implementation block
-(void)setDelegate:(id<MNTunnelLocationProjectorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNTunnelLocationProjectorDelegate>)delegate;
-(void)stop;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_MN11*)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(BOOL)_locationIsGoodEnoughToEndProjection:(id)arg1 ;
-(void)_resetLocationUpdateOverdueWithTimeout:(double)arg1 ;
-(void)_locationUpdateOverdueTimerFired:(id)arg1 ;
-(double)_locationOverdueTimeoutForLocation:(id)arg1 ;
-(id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2 ;
-(BOOL)isProjecting;
@end

