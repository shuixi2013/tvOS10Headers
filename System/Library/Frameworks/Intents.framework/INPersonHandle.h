/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPersonHandleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {

	NSString* _value;
	long long _type;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)_dictionaryRepresentation;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
@end

