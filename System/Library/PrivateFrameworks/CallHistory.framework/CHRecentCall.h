/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CHPhoneBookManagerProtocol;
@class NSString, NSDate, NSNumber, NSValue, NSMutableArray;

@interface CHRecentCall : CHSynchronizable <NSSecureCoding, NSCopying> {

	BOOL _read;
	BOOL _callerIdIsBlocked;
	BOOL _multiCall;
	BOOL _answered;
	BOOL _mobileOriginated;
	unsigned _callerIdAvailability;
	unsigned _callType;
	unsigned _callStatus;
	unsigned _callCategory;
	NSString* _callerNetworkName;
	long long _handleType;
	NSString* _uniqueId;
	NSString* _devicePhoneId;
	NSString* _callerId;
	NSString* _serviceProvider;
	NSDate* _date;
	double _duration;
	NSNumber* _bytesOfDataUsed;
	NSString* _isoCountryCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSNumber* _disconnectedCause;
	NSString* _callerNetworkFirstName;
	NSString* _callerNetworkSecondName;
	unsigned long long _unreadCount;
	NSValue* _addressBookRecordRef;
	NSString* _clientAddressBookRecordId;
	long long _mediaType;
	long long _ttyType;
	NSString* _callerName;
	NSMutableArray* _callOccurrences;
	NSString* _callerIdLabel;
	NSString* _callerIdLocation;
	NSString* _addressBookRecordId;
	NSString* _addressBookCallerIDMultiValueId;
	NSString* _callerIdFormatted;
	id<CHPhoneBookManagerProtocol> _phoneBookManager;

}

@property (nonatomic,copy) NSString * callerName;                                               //@synthesize callerName=_callerName - In the implementation block
@property (assign) BOOL callerIdIsBlocked;                                                      //@synthesize callerIdIsBlocked=_callerIdIsBlocked - In the implementation block
@property (copy) NSString * callerNetworkFirstName;                                             //@synthesize callerNetworkFirstName=_callerNetworkFirstName - In the implementation block
@property (copy) NSString * callerNetworkSecondName;                                            //@synthesize callerNetworkSecondName=_callerNetworkSecondName - In the implementation block
@property (assign) unsigned long long unreadCount;                                              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * callOccurrences;                                  //@synthesize callOccurrences=_callOccurrences - In the implementation block
@property (nonatomic,copy) NSString * callerIdLabel;                                            //@synthesize callerIdLabel=_callerIdLabel - In the implementation block
@property (nonatomic,copy) NSString * callerIdLocation;                                         //@synthesize callerIdLocation=_callerIdLocation - In the implementation block
@property (nonatomic,copy) NSString * addressBookRecordId;                                      //@synthesize addressBookRecordId=_addressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * addressBookCallerIDMultiValueId;                          //@synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId - In the implementation block
@property (assign) BOOL multiCall;                                                              //@synthesize multiCall=_multiCall - In the implementation block
@property (getter=callerIdForDisplay,nonatomic,copy) NSString * callerIdFormatted;              //@synthesize callerIdFormatted=_callerIdFormatted - In the implementation block
@property (retain) id<CHPhoneBookManagerProtocol> phoneBookManager;                             //@synthesize phoneBookManager=_phoneBookManager - In the implementation block
@property (assign) BOOL answered;                                                               //@synthesize answered=_answered - In the implementation block
@property (assign) BOOL mobileOriginated;                                                       //@synthesize mobileOriginated=_mobileOriginated - In the implementation block
@property (copy) NSString * uniqueId;                                                           //@synthesize uniqueId=_uniqueId - In the implementation block
@property (copy) NSString * devicePhoneId;                                                      //@synthesize devicePhoneId=_devicePhoneId - In the implementation block
@property (copy) NSString * callerId;                                                           //@synthesize callerId=_callerId - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkName;                                        //@synthesize callerNetworkName=_callerNetworkName - In the implementation block
@property (assign,nonatomic) unsigned callType;                                                 //@synthesize callType=_callType - In the implementation block
@property (assign) unsigned callStatus;                                                         //@synthesize callStatus=_callStatus - In the implementation block
@property (assign,nonatomic) unsigned callCategory;                                             //@synthesize callCategory=_callCategory - In the implementation block
@property (nonatomic,copy) NSString * serviceProvider;                                          //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (copy) NSDate * date;                                                                 //@synthesize date=_date - In the implementation block
@property (assign) double duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (copy) NSNumber * bytesOfDataUsed;                                                    //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (assign,nonatomic) BOOL read;                                                         //@synthesize read=_read - In the implementation block
@property (copy) NSString * isoCountryCode;                                                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (copy) NSString * mobileCountryCode;                                                  //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (copy) NSString * mobileNetworkCode;                                                  //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (copy) NSNumber * disconnectedCause;                                                  //@synthesize disconnectedCause=_disconnectedCause - In the implementation block
@property (assign,nonatomic) unsigned callerIdAvailability;                                     //@synthesize callerIdAvailability=_callerIdAvailability - In the implementation block
@property (copy) NSValue * addressBookRecordRef;                                                //@synthesize addressBookRecordRef=_addressBookRecordRef - In the implementation block
@property (copy) NSString * clientAddressBookRecordId;                                          //@synthesize clientAddressBookRecordId=_clientAddressBookRecordId - In the implementation block
@property (assign,nonatomic) long long mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long ttyType;                                                 //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) long long handleType;                                              //@synthesize handleType=_handleType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serviceProviderForCallType:(unsigned)arg1 ;
+(unsigned)categoryForCallType:(unsigned)arg1 ;
+(long long)handleTypeForCallerId:(id)arg1 ;
+(id)callTypeAsString:(unsigned)arg1 ;
+(unsigned)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2 ;
+(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
+(id)callTTYTypeAsString:(long long)arg1 ;
+(id)callMediaTypeAsString:(long long)arg1 ;
+(id)callStatusAsString:(unsigned)arg1 ;
+(id)callCategoryAsString:(unsigned)arg1 ;
+(id)callHandleTypeAsString:(long long)arg1 ;
+(unsigned)getCallTypeForCategory:(unsigned)arg1 andServiceProvider:(id)arg2 ;
+(long long)mediaTypeForCallCategory:(unsigned)arg1 ;
+(long long)ttyTypeForCallCategory:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSDate *)date;
-(id)initWithQueue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uniqueId;
-(long long)handleType;
-(void)setHandleType:(long long)arg1 ;
-(unsigned long long)unreadCount;
-(BOOL)read;
-(void)setRead:(BOOL)arg1 ;
-(NSString *)callerId;
-(id)callerIdSubStringForDisplay;
-(NSString *)isoCountryCode;
-(id)callerIdForDisplay;
-(id)callerNameForDisplay;
-(NSString *)addressBookRecordId;
-(NSString *)serviceProvider;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)handleCurrentLocaleDidChangeNotification:(id)arg1 ;
-(void)setCallType:(unsigned)arg1 ;
-(void)setCallStatus:(unsigned)arg1 ;
-(unsigned)callType;
-(unsigned)callStatus;
-(void)addressBookChanged;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(unsigned)callCategory;
-(BOOL)answered;
-(void)setAnswered:(BOOL)arg1 ;
-(BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)coalescingHash;
-(unsigned long long)numberOfOccurrences;
-(NSMutableArray *)callOccurrences;
-(void)setBytesOfDataUsed:(NSNumber *)arg1 ;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setCallOccurrences:(NSMutableArray *)arg1 ;
-(void)setMultiCall:(BOOL)arg1 ;
-(BOOL)multiCall;
-(NSNumber *)disconnectedCause;
-(NSNumber *)bytesOfDataUsed;
-(NSString *)callerNetworkName;
-(unsigned)callerIdAvailability;
-(NSString *)devicePhoneId;
-(void)setCallerId:(NSString *)arg1 ;
-(void)setDisconnectedCause:(NSNumber *)arg1 ;
-(void)setCallerNetworkName:(NSString *)arg1 ;
-(void)setCallerIdAvailability:(unsigned)arg1 ;
-(void)setDevicePhoneId:(NSString *)arg1 ;
-(void)setCallerIdLocation:(NSString *)arg1 ;
-(void)setCallCategory:(unsigned)arg1 ;
-(void)setPhoneBookManager:(id<CHPhoneBookManagerProtocol>)arg1 ;
-(void)registerForCurrentLocaleDidChangeNotification;
-(void)fixCallTypeInfo;
-(void)setCallerIdFormatted:(NSString *)arg1 ;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(NSString *)mobileNetworkCode;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(BOOL)callerIdIsBlocked;
-(void)setCallerIdIsBlocked:(BOOL)arg1 ;
-(NSString *)callerNetworkFirstName;
-(void)setCallerNetworkFirstName:(NSString *)arg1 ;
-(NSString *)callerNetworkSecondName;
-(void)setCallerNetworkSecondName:(NSString *)arg1 ;
-(void)setCallerIdLabel:(NSString *)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(void)setAddressBookRecordId:(NSString *)arg1 ;
-(void)setAddressBookCallerIDMultiValueId:(NSString *)arg1 ;
-(void)setAddressBookRecordRef:(NSValue *)arg1 ;
-(NSString *)clientAddressBookRecordId;
-(void)setClientAddressBookRecordId:(NSString *)arg1 ;
-(id)callerNameSync;
-(void)setCallerName:(NSString *)arg1 ;
-(id)addressBookRecordIdSync;
-(BOOL)isAddressBookContactASuggestionSync;
-(BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1 ;
-(BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1 ;
-(BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)callOccurrencesSync;
-(void)addOccurrencesFromArraySync:(id)arg1 ;
-(unsigned long long)numberOfOccurrencesSync;
-(void)createOccurrenceArraySync;
-(BOOL)callerIdIsEmailAddressSync;
-(id<CHPhoneBookManagerProtocol>)phoneBookManager;
-(void)fetchAndSetAddressBookIdsSync;
-(id)addressBookCallerIDMultiValueIdSync;
-(long long)handleTypeSync;
-(id)addressBookRecordRefSync;
-(id)callerIdForDisplaySync;
-(id)getLocalizedStringSync:(id)arg1 ;
-(id)callerNameForDisplaySync;
-(id)callerIdLabelSync;
-(id)callerIdLocationSync;
-(id)callOccurrencesAsStringSync;
-(void)updateTTYAndMediaType;
-(BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(NSString *)addressBookCallerIDMultiValueId;
-(BOOL)callerIdIsEmailAddress;
-(NSString *)callerName;
-(NSString *)callerIdLabel;
-(NSString *)callerIdLocation;
-(BOOL)representsCallAtDate:(id)arg1 ;
-(BOOL)isAddressBookContactASuggestion;
-(id)descriptionInDepth;
-(NSValue *)addressBookRecordRef;
-(BOOL)mobileOriginated;
-(void)setMobileOriginated:(BOOL)arg1 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(long long)ttyType;
-(void)setTtyType:(long long)arg1 ;
@end

