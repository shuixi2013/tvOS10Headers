/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@class NSString;

@interface NSNumber : NSValue

@property (readonly) SCD_Struct_NS46 decimalValue; 
@property (readonly) char charValue; 
@property (readonly) unsigned char unsignedCharValue; 
@property (readonly) short shortValue; 
@property (readonly) unsigned short unsignedShortValue; 
@property (readonly) int intValue; 
@property (readonly) unsigned unsignedIntValue; 
@property (readonly) long long longValue; 
@property (readonly) unsigned long long unsignedLongValue; 
@property (readonly) long long longLongValue; 
@property (readonly) unsigned long long unsignedLongLongValue; 
@property (readonly) float floatValue; 
@property (readonly) double doubleValue; 
@property (readonly) BOOL boolValue; 
@property (readonly) long long integerValue; 
@property (readonly) unsigned long long unsignedIntegerValue; 
@property (copy,readonly) NSString * stringValue; 
+(id)numberWithDouble:(double)arg1 ;
+(void)initialize;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
-(char)charValue;
-(unsigned long long)_cfTypeID;
-(long long)_cfNumberType;
-(unsigned char)_getValue:(void*)arg1 forType:(long long)arg2 ;
-(long long)_reverseCompare:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)initWithChar:(char)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(id)initWithUnsignedLong:(unsigned long long)arg1 ;
-(id)initWithShort:(short)arg1 ;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(unsigned char)unsignedCharValue;
-(unsigned short)unsignedShortValue;
-(SCD_Struct_NS46)decimalValue;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)integerValue;
-(double)doubleValue;
-(long long)compare:(id)arg1 ;
-(BOOL)boolValue;
-(int)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithLong:(long long)arg1 ;
-(float)floatValue;
-(unsigned long long)unsignedIntegerValue;
-(unsigned long long)unsignedLongValue;
-(unsigned)unsignedIntValue;
-(NSString *)stringValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(id)initWithBool:(BOOL)arg1 ;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(id)initWithDouble:(double)arg1 ;
-(BOOL)isNSNumber__;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(short)shortValue;
-(long long)longValue;
-(id)initWithInt:(int)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

