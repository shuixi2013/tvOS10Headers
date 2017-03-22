/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _stringValue;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumberRef; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * digits; 
@property (nonatomic,copy,readonly) NSString * formattedStringValue; 
@property (nonatomic,copy,readonly) NSString * formattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * unformattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)defaultCountryCode;
+(id)phoneNumberWithStringValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSString *)countryCode;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithStringValue:(id)arg1 ;
-(NSString *)unformattedInternationalStringValue;
-(id)lastFourDigits;
-(BOOL)isLikePhoneNumber:(id)arg1 ;
-(NSString *)formattedInternationalStringValue;
-(NSString *)formattedStringValue;
-(BOOL)isValid:(id*)arg1 ;
-(CFPhoneNumberRef)phoneNumberRef;
-(NSString *)digits;
@end

