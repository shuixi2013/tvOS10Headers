/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR1* _preferredIntervals;
	SCD_Struct_MR24* _supportedRates;
	int _canScrub;
	int _command;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	int _numAvailableSkips;
	int _presentationStyle;
	int _repeatMode;
	int _shuffleMode;
	int _skipFrequency;
	int _skipInterval;
	BOOL _active;
	BOOL _enabled;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) int command;                                               //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                                               //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredIntervalsCount; 
@property (nonatomic,readonly) double* preferredIntervals; 
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedShortTitle; 
@property (nonatomic,retain) NSString * localizedShortTitle;                            //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumRating; 
@property (assign,nonatomic) float minimumRating;                                       //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumRating; 
@property (assign,nonatomic) float maximumRating;                                       //@synthesize maximumRating=_maximumRating - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedRatesCount; 
@property (nonatomic,readonly) float* supportedRates; 
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                            //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                           //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationStyle; 
@property (assign,nonatomic) int presentationStyle;                                     //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) int skipInterval;                                          //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasNumAvailableSkips; 
@property (assign,nonatomic) int numAvailableSkips;                                     //@synthesize numAvailableSkips=_numAvailableSkips - In the implementation block
@property (assign,nonatomic) BOOL hasSkipFrequency; 
@property (assign,nonatomic) int skipFrequency;                                         //@synthesize skipFrequency=_skipFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasCanScrub; 
@property (assign,nonatomic) int canScrub;                                              //@synthesize canScrub=_canScrub - In the implementation block
-(BOOL)enabled;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)presentationStyle;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocalizedTitle;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(id)commandAsString:(int)arg1 ;
-(int)StringAsCommand:(id)arg1 ;
-(unsigned long long)preferredIntervalsCount;
-(void)clearPreferredIntervals;
-(double)preferredIntervalAtIndex:(unsigned long long)arg1 ;
-(void)addPreferredInterval:(double)arg1 ;
-(unsigned long long)supportedRatesCount;
-(void)clearSupportedRates;
-(float)supportedRateAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedRate:(float)arg1 ;
-(void)setHasActive:(BOOL)arg1 ;
-(BOOL)hasActive;
-(void)setPreferredIntervals:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasLocalizedShortTitle;
-(void)setHasMinimumRating:(BOOL)arg1 ;
-(BOOL)hasMinimumRating;
-(void)setHasMaximumRating:(BOOL)arg1 ;
-(BOOL)hasMaximumRating;
-(float*)supportedRates;
-(void)setSupportedRates:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasPresentationStyle:(BOOL)arg1 ;
-(BOOL)hasPresentationStyle;
-(void)setSkipInterval:(int)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(void)setNumAvailableSkips:(int)arg1 ;
-(void)setHasNumAvailableSkips:(BOOL)arg1 ;
-(BOOL)hasNumAvailableSkips;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setHasSkipFrequency:(BOOL)arg1 ;
-(BOOL)hasSkipFrequency;
-(void)setCanScrub:(int)arg1 ;
-(void)setHasCanScrub:(BOOL)arg1 ;
-(BOOL)hasCanScrub;
-(int)skipInterval;
-(int)numAvailableSkips;
-(int)skipFrequency;
-(int)canScrub;
-(void)setCommand:(int)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(int)command;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(double*)preferredIntervals;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(NSString *)localizedShortTitle;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(float)minimumRating;
-(float)maximumRating;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
@end

