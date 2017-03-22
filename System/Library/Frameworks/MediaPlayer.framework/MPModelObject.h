/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, MPIdentifierSet;

@interface MPModelObject : NSObject <NSCopying> {

	BOOL _wasFullyInitialized;
	NSMutableSet* _initializedProperties;
	MPModelObject* _originalObject;
	MPIdentifierSet* _identifiers;

}

@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration; 
@property (nonatomic,readonly) long long libraryRemovalSupportedOptions; 
@property (nonatomic,readonly) MPIdentifierSet * originalIdentifierSet; 
@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                                                         //@synthesize identifiers=_identifiers - In the implementation block
+(void)initialize;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(BOOL)supportsLibraryAddStatusObservation;
+(void)performWithoutEnforcement:(/*^block*/id)arg1 ;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithType:(long long)arg1 ;
-(id)initWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(MPIdentifierSet *)identifiers;
-(void)appendIdentifiersToDescription:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(id)newKeepLocalStatusObserverConfiguration;
-(BOOL)hasLoadedValueForKey:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(MPIdentifierSet *)originalIdentifierSet;
-(BOOL)hasLoadedValuesForProperties:(id)arg1 ;
-(long long)libraryRemovalSupportedOptions;
@end

