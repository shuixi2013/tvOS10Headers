/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class NSString, AUViewControllerBase, NSArray, AUAudioUnitPreset, AUAudioUnitBusArray, AUParameterTree, NSDictionary;

@interface AUAudioUnit : NSObject {

	OpaqueAudioComponentRef _component;
	NSString* _componentName;
	unsigned _componentVersion;
	AUViewControllerBase* _cachedViewController;
	unsigned _maximumFramesToRender;
	BOOL _renderResourcesAllocated;
	BOOL _allParameterValues;
	BOOL _shouldBypassEffect;
	BOOL _canProcessInPlace;
	BOOL _renderingOffline;
	BOOL _supportsMPE;
	long long _virtualMIDICableCount;
	NSArray* _factoryPresets;
	AUAudioUnitPreset* _currentPreset;
	double _latency;
	double _tailTime;
	long long _renderQuality;
	/*^block*/id _musicalContextBlock;
	/*^block*/id _transportStateBlock;
	NSString* _contextName;
	NSArray* _channelMap;
	AudioComponentDescription _componentDescription;
	RealtimeState* _realtimeState;

}

@property (assign,nonatomic) RealtimeState* realtimeState;                                         //@synthesize realtimeState=_realtimeState - In the implementation block
@property (nonatomic,readonly) AudioComponentDescription componentDescription;                     //@synthesize componentDescription=_componentDescription - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentRef component; 
@property (nonatomic,copy,readonly) NSString * componentName; 
@property (nonatomic,copy,readonly) NSString * audioUnitName; 
@property (nonatomic,copy,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned componentVersion; 
@property (nonatomic,readonly) BOOL renderResourcesAllocated;                                      //@synthesize renderResourcesAllocated=_renderResourcesAllocated - In the implementation block
@property (nonatomic,readonly) AUAudioUnitBusArray * inputBusses; 
@property (nonatomic,readonly) AUAudioUnitBusArray * outputBusses; 
@property (nonatomic,readonly) id renderBlock; 
@property (nonatomic,readonly) id scheduleParameterBlock; 
@property (assign,nonatomic) unsigned maximumFramesToRender; 
@property (nonatomic,readonly) AUParameterTree * parameterTree; 
@property (nonatomic,readonly) BOOL allParameterValues;                                            //@synthesize allParameterValues=_allParameterValues - In the implementation block
@property (getter=isMusicDeviceOrEffect,nonatomic,readonly) BOOL musicDeviceOrEffect; 
@property (nonatomic,readonly) long long virtualMIDICableCount;                                    //@synthesize virtualMIDICableCount=_virtualMIDICableCount - In the implementation block
@property (nonatomic,readonly) id scheduleMIDIEventBlock; 
@property (nonatomic,copy) NSDictionary * fullState; 
@property (nonatomic,copy) NSDictionary * fullStateForDocument; 
@property (nonatomic,copy,readonly) NSArray * factoryPresets;                                      //@synthesize factoryPresets=_factoryPresets - In the implementation block
@property (nonatomic,retain) AUAudioUnitPreset * currentPreset;                                    //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,readonly) double latency;                                                     //@synthesize latency=_latency - In the implementation block
@property (nonatomic,readonly) double tailTime;                                                    //@synthesize tailTime=_tailTime - In the implementation block
@property (assign,nonatomic) long long renderQuality;                                              //@synthesize renderQuality=_renderQuality - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassEffect;                                              //@synthesize shouldBypassEffect=_shouldBypassEffect - In the implementation block
@property (nonatomic,readonly) BOOL canProcessInPlace;                                             //@synthesize canProcessInPlace=_canProcessInPlace - In the implementation block
@property (assign,getter=isRenderingOffline,nonatomic) BOOL renderingOffline;                      //@synthesize renderingOffline=_renderingOffline - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelCapabilities; 
@property (nonatomic,copy) id musicalContextBlock;                                                 //@synthesize musicalContextBlock=_musicalContextBlock - In the implementation block
@property (nonatomic,copy) id transportStateBlock;                                                 //@synthesize transportStateBlock=_transportStateBlock - In the implementation block
@property (nonatomic,copy) NSString * contextName;                                                 //@synthesize contextName=_contextName - In the implementation block
@property (nonatomic,readonly) BOOL supportsMPE;                                                   //@synthesize supportsMPE=_supportsMPE - In the implementation block
@property (nonatomic,copy) NSArray * channelMap;                                                   //@synthesize channelMap=_channelMap - In the implementation block
+(void)registerSubclass:(Class)arg1 asComponentDescription:(AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned)arg4 ;
+(id)keyPathsForValuesAffectingAllParameterValues;
+(id)auAudioUnitForAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 error:(id*)arg2 ;
-(id)renderBlock;
-(AUAudioUnitBusArray *)inputBusses;
-(id)scheduleParameterBlock;
-(id)scheduleMIDIEventBlock;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(AUAudioUnitBusArray *)outputBusses;
-(void)deallocateRenderResources;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(AUParameterTree *)parameterTree;
-(NSArray *)channelCapabilities;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(void)setMusicalContextBlock:(id)arg1 ;
-(void)setTransportStateBlock:(id)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(/*^block*/id)internalRenderBlock;
-(BOOL)isMusicDeviceOrEffect;
-(NSDictionary *)fullState;
-(void)setFullState:(NSDictionary *)arg1 ;
-(NSString *)audioUnitName;
-(unsigned)componentVersion;
-(AUEventSchedule*)eventSchedule;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)removeRenderObserver:(long long)arg1 ;
-(NSDictionary *)fullStateForDocument;
-(void)setFullStateForDocument:(NSDictionary *)arg1 ;
-(id)cachedViewController;
-(void)setCachedViewController:(id)arg1 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2 ;
-(void)setRenderResourcesAllocated:(BOOL)arg1 ;
-(void)setMaximumFramesToRender:(unsigned)arg1 ;
-(unsigned)maximumFramesToRender;
-(AudioComponentDescription)componentDescription;
-(BOOL)renderResourcesAllocated;
-(BOOL)allParameterValues;
-(long long)virtualMIDICableCount;
-(NSArray *)factoryPresets;
-(double)tailTime;
-(long long)renderQuality;
-(void)setRenderQuality:(long long)arg1 ;
-(BOOL)shouldBypassEffect;
-(void)setShouldBypassEffect:(BOOL)arg1 ;
-(BOOL)canProcessInPlace;
-(BOOL)isRenderingOffline;
-(void)setRenderingOffline:(BOOL)arg1 ;
-(id)musicalContextBlock;
-(id)transportStateBlock;
-(NSString *)contextName;
-(void)setContextName:(NSString *)arg1 ;
-(BOOL)supportsMPE;
-(RealtimeState*)realtimeState;
-(void)setRealtimeState:(RealtimeState*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)componentName;
-(double)latency;
-(OpaqueAudioComponentRef)component;
-(NSString *)manufacturerName;
-(void)setChannelMap:(NSArray *)arg1 ;
-(void)setCurrentPreset:(AUAudioUnitPreset *)arg1 ;
-(AUAudioUnitPreset *)currentPreset;
-(NSArray *)channelMap;
@end

