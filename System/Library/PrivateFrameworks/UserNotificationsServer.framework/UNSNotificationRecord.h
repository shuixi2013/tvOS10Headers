/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber, NSString, NSDate, NSDateComponents, NSCalendar, CLRegion, NSTimeZone, NSDictionary;

@interface UNSNotificationRecord : NSObject {

	BOOL _hasDefaultAction;
	BOOL _fromSnooze;
	BOOL _shouldAlwaysAlertWhileAppIsForeground;
	BOOL _shouldBadgeApplicationIcon;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldLockDevice;
	BOOL _shouldPauseMedia;
	BOOL _shouldPlaySound;
	BOOL _shouldPresentAlert;
	BOOL _shouldSoundRepeat;
	BOOL _snoozeable;
	BOOL _transient;
	BOOL _triggerRepeats;
	int _triggerRemainingRepeatCount;
	int _triggerTotalRepeatCount;
	NSArray* _attachments;
	NSNumber* _badge;
	NSString* _body;
	NSArray* _bodyLocalizationArguments;
	NSString* _bodyLocalizationKey;
	NSString* _categoryIdentifier;
	NSString* _threadIdentifier;
	NSArray* _peopleIdentifiers;
	NSNumber* _contentAvailable;
	NSNumber* _mutableContent;
	NSString* _darwinNotificationName;
	NSString* _darwinSnoozedNotificationName;
	NSDate* _date;
	NSString* _defaultActionTitle;
	NSString* _defaultActionTitleLocalizationKey;
	NSString* _identifier;
	NSString* _launchImageName;
	NSDate* _requestDate;
	NSString* _audioCategory;
	NSNumber* _audioVolume;
	double _soundMaximumDuration;
	NSString* _subtitle;
	NSArray* _subtitleLocalizationArguments;
	NSString* _subtitleLocalizationKey;
	NSString* _title;
	NSArray* _titleLocalizationArguments;
	NSString* _titleLocalizationKey;
	NSString* _toneAlertTopic;
	long long _toneAlertType;
	NSString* _toneFileName;
	NSString* _toneIdentifier;
	unsigned long long _toneMediaLibraryItemIdentifier;
	NSDate* _triggerDate;
	NSDateComponents* _triggerDateComponents;
	NSCalendar* _triggerRepeatCalendar;
	unsigned long long _triggerRepeatInterval;
	CLRegion* _triggerRegion;
	double _triggerTimeInterval;
	NSTimeZone* _triggerTimeZone;
	NSString* _triggerType;
	NSDictionary* _userInfo;
	NSString* _vibrationIdentifier;
	NSDictionary* _vibrationPattern;

}

@property (nonatomic,copy) NSArray * attachments;                                            //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSNumber * badge;                                                 //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * body;                                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSArray * bodyLocalizationArguments;                              //@synthesize bodyLocalizationArguments=_bodyLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * bodyLocalizationKey;                                   //@synthesize bodyLocalizationKey=_bodyLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * categoryIdentifier;                                    //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * threadIdentifier;                                      //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * peopleIdentifiers;                                      //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,copy) NSNumber * contentAvailable;                                      //@synthesize contentAvailable=_contentAvailable - In the implementation block
@property (nonatomic,copy) NSNumber * mutableContent;                                        //@synthesize mutableContent=_mutableContent - In the implementation block
@property (nonatomic,copy) NSString * darwinNotificationName;                                //@synthesize darwinNotificationName=_darwinNotificationName - In the implementation block
@property (nonatomic,copy) NSString * darwinSnoozedNotificationName;                         //@synthesize darwinSnoozedNotificationName=_darwinSnoozedNotificationName - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultAction;                                          //@synthesize hasDefaultAction=_hasDefaultAction - In the implementation block
@property (nonatomic,copy) NSString * defaultActionTitle;                                    //@synthesize defaultActionTitle=_defaultActionTitle - In the implementation block
@property (nonatomic,copy) NSString * defaultActionTitleLocalizationKey;                     //@synthesize defaultActionTitleLocalizationKey=_defaultActionTitleLocalizationKey - In the implementation block
@property (assign,getter=isFromSnooze,nonatomic) BOOL fromSnooze;                            //@synthesize fromSnooze=_fromSnooze - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * launchImageName;                                       //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy) NSDate * requestDate;                                             //@synthesize requestDate=_requestDate - In the implementation block
@property (assign,nonatomic) BOOL shouldAlwaysAlertWhileAppIsForeground;                     //@synthesize shouldAlwaysAlertWhileAppIsForeground=_shouldAlwaysAlertWhileAppIsForeground - In the implementation block
@property (assign,nonatomic) BOOL shouldBadgeApplicationIcon;                                //@synthesize shouldBadgeApplicationIcon=_shouldBadgeApplicationIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreRingerSwitch;                                  //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (assign,nonatomic) BOOL shouldLockDevice;                                          //@synthesize shouldLockDevice=_shouldLockDevice - In the implementation block
@property (assign,nonatomic) BOOL shouldPauseMedia;                                          //@synthesize shouldPauseMedia=_shouldPauseMedia - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaySound;                                           //@synthesize shouldPlaySound=_shouldPlaySound - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentAlert;                                        //@synthesize shouldPresentAlert=_shouldPresentAlert - In the implementation block
@property (assign,nonatomic) BOOL shouldSoundRepeat;                                         //@synthesize shouldSoundRepeat=_shouldSoundRepeat - In the implementation block
@property (assign,getter=isSnoozeable,nonatomic) BOOL snoozeable;                            //@synthesize snoozeable=_snoozeable - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                                         //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy) NSNumber * audioVolume;                                           //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,nonatomic) double soundMaximumDuration;                                    //@synthesize soundMaximumDuration=_soundMaximumDuration - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSArray * subtitleLocalizationArguments;                          //@synthesize subtitleLocalizationArguments=_subtitleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalizationKey;                               //@synthesize subtitleLocalizationKey=_subtitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArguments;                             //@synthesize titleLocalizationArguments=_titleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                                  //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * toneAlertTopic;                                        //@synthesize toneAlertTopic=_toneAlertTopic - In the implementation block
@property (assign,nonatomic) long long toneAlertType;                                        //@synthesize toneAlertType=_toneAlertType - In the implementation block
@property (nonatomic,copy) NSString * toneFileName;                                          //@synthesize toneFileName=_toneFileName - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                                        //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long toneMediaLibraryItemIdentifier;              //@synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                              //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) NSDate * triggerDate;                                             //@synthesize triggerDate=_triggerDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * triggerDateComponents;                         //@synthesize triggerDateComponents=_triggerDateComponents - In the implementation block
@property (nonatomic,copy) NSCalendar * triggerRepeatCalendar;                               //@synthesize triggerRepeatCalendar=_triggerRepeatCalendar - In the implementation block
@property (assign,nonatomic) unsigned long long triggerRepeatInterval;                       //@synthesize triggerRepeatInterval=_triggerRepeatInterval - In the implementation block
@property (assign,nonatomic) int triggerRemainingRepeatCount;                                //@synthesize triggerRemainingRepeatCount=_triggerRemainingRepeatCount - In the implementation block
@property (assign,nonatomic) BOOL triggerRepeats;                                            //@synthesize triggerRepeats=_triggerRepeats - In the implementation block
@property (nonatomic,copy) CLRegion * triggerRegion;                                         //@synthesize triggerRegion=_triggerRegion - In the implementation block
@property (assign,nonatomic) double triggerTimeInterval;                                     //@synthesize triggerTimeInterval=_triggerTimeInterval - In the implementation block
@property (nonatomic,copy) NSTimeZone * triggerTimeZone;                                     //@synthesize triggerTimeZone=_triggerTimeZone - In the implementation block
@property (assign,nonatomic) int triggerTotalRepeatCount;                                    //@synthesize triggerTotalRepeatCount=_triggerTotalRepeatCount - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                                           //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                                   //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * vibrationPattern;                                  //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,readonly) BOOL hasPendingTrigger; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(NSDate *)date;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)body;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(void)setBadge:(NSNumber *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setHasDefaultAction:(BOOL)arg1 ;
-(void)setLaunchImageName:(NSString *)arg1 ;
-(BOOL)isTransient;
-(void)setShouldAlwaysAlertWhileAppIsForeground:(BOOL)arg1 ;
-(void)setShouldLockDevice:(BOOL)arg1 ;
-(void)setShouldPauseMedia:(BOOL)arg1 ;
-(void)setSnoozeable:(BOOL)arg1 ;
-(BOOL)isFromSnooze;
-(void)setFromSnooze:(BOOL)arg1 ;
-(void)setDarwinNotificationName:(NSString *)arg1 ;
-(void)setDarwinSnoozedNotificationName:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSNumber *)audioVolume;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setToneFileName:(NSString *)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(NSString *)launchImageName;
-(NSString *)categoryIdentifier;
-(BOOL)isSnoozeable;
-(NSNumber *)badge;
-(NSString *)darwinNotificationName;
-(BOOL)shouldAlwaysAlertWhileAppIsForeground;
-(BOOL)hasDefaultAction;
-(BOOL)shouldLockDevice;
-(BOOL)shouldPauseMedia;
-(NSString *)darwinSnoozedNotificationName;
-(NSString *)vibrationIdentifier;
-(unsigned long long)toneMediaLibraryItemIdentifier;
-(NSString *)toneIdentifier;
-(NSString *)toneFileName;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)peopleIdentifiers;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(BOOL)hasBadge;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(BOOL)hasBody;
-(void)setTransient:(BOOL)arg1 ;
-(void)setTriggerType:(NSString *)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(BOOL)arg1 ;
-(NSString *)audioCategory;
-(void)setAudioCategory:(NSString *)arg1 ;
-(BOOL)shouldIgnoreRingerSwitch;
-(NSString *)triggerType;
-(long long)toneAlertType;
-(void)setToneAlertType:(long long)arg1 ;
-(BOOL)isSimilar:(id)arg1 ;
-(void)setRequestDate:(NSDate *)arg1 ;
-(BOOL)willNotifyUser;
-(BOOL)triggerRepeats;
-(NSDate *)requestDate;
-(unsigned long long)triggerRepeatInterval;
-(int)triggerRemainingRepeatCount;
-(void)setTriggerRemainingRepeatCount:(int)arg1 ;
-(CLRegion *)triggerRegion;
-(void)setBodyLocalizationArguments:(NSArray *)arg1 ;
-(void)setBodyLocalizationKey:(NSString *)arg1 ;
-(void)setContentAvailable:(NSNumber *)arg1 ;
-(void)setMutableContent:(NSNumber *)arg1 ;
-(void)setDefaultActionTitle:(NSString *)arg1 ;
-(void)setDefaultActionTitleLocalizationKey:(NSString *)arg1 ;
-(void)setShouldBadgeApplicationIcon:(BOOL)arg1 ;
-(void)setShouldSoundRepeat:(BOOL)arg1 ;
-(void)setSoundMaximumDuration:(double)arg1 ;
-(void)setShouldPlaySound:(BOOL)arg1 ;
-(void)setShouldPresentAlert:(BOOL)arg1 ;
-(void)setSubtitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setSubtitleLocalizationKey:(NSString *)arg1 ;
-(void)setTitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setToneAlertTopic:(NSString *)arg1 ;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(void)setTriggerDateComponents:(NSDateComponents *)arg1 ;
-(void)setTriggerRegion:(CLRegion *)arg1 ;
-(void)setTriggerRepeatCalendar:(NSCalendar *)arg1 ;
-(void)setTriggerRepeatInterval:(unsigned long long)arg1 ;
-(void)setTriggerRepeats:(BOOL)arg1 ;
-(void)setTriggerTimeInterval:(double)arg1 ;
-(void)setTriggerTimeZone:(NSTimeZone *)arg1 ;
-(void)setTriggerTotalRepeatCount:(int)arg1 ;
-(NSArray *)bodyLocalizationArguments;
-(NSString *)bodyLocalizationKey;
-(NSNumber *)contentAvailable;
-(NSNumber *)mutableContent;
-(NSString *)defaultActionTitle;
-(NSString *)defaultActionTitleLocalizationKey;
-(BOOL)shouldBadgeApplicationIcon;
-(BOOL)shouldPlaySound;
-(BOOL)shouldPresentAlert;
-(BOOL)shouldSoundRepeat;
-(double)soundMaximumDuration;
-(NSArray *)subtitleLocalizationArguments;
-(NSString *)subtitleLocalizationKey;
-(NSArray *)titleLocalizationArguments;
-(NSString *)titleLocalizationKey;
-(NSString *)toneAlertTopic;
-(NSDate *)triggerDate;
-(NSDateComponents *)triggerDateComponents;
-(NSCalendar *)triggerRepeatCalendar;
-(double)triggerTimeInterval;
-(NSTimeZone *)triggerTimeZone;
-(int)triggerTotalRepeatCount;
-(BOOL)hasSound;
-(BOOL)hasPendingTrigger;
@end

