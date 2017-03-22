/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSFormatter.h>

@interface CNPostalAddressFormatter : NSFormatter {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(id)stringFromPostalAddress:(id)arg1 style:(long long)arg2 ;
+(id)getCountryCodeFromPostalAddress:(id)arg1 ;
+(id)addressValueForFormatKey:(id)arg1 postalAddress:(id)arg2 ;
+(id)postalAddressPropertyKeyForFormatPropertyKey:(id)arg1 ;
+(id)attributedStringFromPostalAddress:(id)arg1 style:(long long)arg2 withDefaultAttributes:(id)arg3 ;
+(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromPostalAddress:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 order:(id*)arg5 ;
-(id)_addressPropertyKeyForDDResult:(DDResultRef)arg1 hasCountry:(BOOL*)arg2 ;
-(id)countryCodeForCountryName:(id)arg1 ;
-(id)attributedStringFromPostalAddress:(id)arg1 name:(id)arg2 organization:(id)arg3 attributes:(id)arg4 ;
-(id)postalAddressFromString:(id)arg1 ;
@end

