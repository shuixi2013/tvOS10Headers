/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger {

	BOOL _formatted;
	NSString* _originalPhoneNumber;
	NSString* _ISOCountryCode;
	NSString* _formattedPhoneNumber;

}

@property (assign) BOOL formatted;                             //@synthesize formatted=_formatted - In the implementation block
@property (copy) NSString * formattedPhoneNumber;              //@synthesize formattedPhoneNumber=_formattedPhoneNumber - In the implementation block
@property (copy) NSString * originalPhoneNumber;               //@synthesize originalPhoneNumber=_originalPhoneNumber - In the implementation block
@property (copy) NSString * ISOCountryCode;                    //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
-(NSString *)ISOCountryCode;
-(BOOL)formatted;
-(NSString *)originalPhoneNumber;
-(void)setFormattedPhoneNumber:(NSString *)arg1 ;
-(void)setFormatted:(BOOL)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2 ;
-(id)formattedNumber;
-(void)setOriginalPhoneNumber:(NSString *)arg1 ;
-(NSString *)formattedPhoneNumber;
-(void)setISOCountryCode:(NSString *)arg1 ;
@end

