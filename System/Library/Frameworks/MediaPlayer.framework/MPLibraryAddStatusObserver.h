/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelObject;

@interface MPLibraryAddStatusObserver : NSObject {

	MPLibraryAddStatusObserverConfiguration _configuration;
	unsigned long long _currentStatus;
	/*^block*/id _statusBlock;
	MPModelObject* _identifyingModelObject;

}

@property (nonatomic,readonly) unsigned long long currentStatus;                                   //@synthesize currentStatus=_currentStatus - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                         //@synthesize statusBlock=_statusBlock - In the implementation block
@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPModelObject * identifyingModelObject;                             //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(void)dealloc;
-(id)init;
-(MPLibraryAddStatusObserverConfiguration)configuration;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(void)_transientStateDidChangeNotification:(id)arg1 ;
-(void)_updateCurrentStatus;
-(unsigned long long)_calculateCurrentStatus;
-(unsigned long long)currentStatus;
-(id)statusBlock;
-(void)setStatusBlock:(id)arg1 ;
-(void)configureWithModelObject:(id)arg1 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(void)_updateInProgressDidChangeNotification:(id)arg1 ;
-(void)setConfiguration:(MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2 ;
@end

