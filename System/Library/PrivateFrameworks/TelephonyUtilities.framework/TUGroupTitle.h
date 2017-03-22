/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class NSString, CNContact, NSArray;

@interface TUGroupTitle : NSObject <TUSearchResult> {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) NSString * idsUniqueId; 
@property (readonly) NSString * idsCanonicalDestination; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSArray *)handles;
-(NSString *)displayName;
-(NSString *)callerId;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)isoCountryCode;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(BOOL)mostRecentCallWasMissed;
-(NSString *)idsUniqueId;
-(NSString *)idsCanonicalDestination;
-(NSArray *)idsCanonicalDestinations;
@end

