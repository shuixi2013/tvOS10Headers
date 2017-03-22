/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumberFormatter, NSLocale;

@interface NSUnitFormatter : NSFormatter <NSSecureCoding> {

	NSNumberFormatter* _numberFormatter;
	unsigned long long _unitOptions;
	long long _unitStyle;
	UAMeasureFormatRef _formatter;
	UPluralRulesRef _prules;
	BOOL _modified;
	NSLocale* _locale;

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (copy) NSLocale * locale; 
@property (assign) unsigned long long unitOptions; 
@property (assign) long long unitStyle; 
+(BOOL)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(unsigned long long)unitOptions;
-(int)_determineUnitsToFormat:(int*)arg1 fromMeasurement:(id)arg2 ;
-(id)stringForValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(void)checkIfModified;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4 ;
-(id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
@end

