/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSFormatter;

@interface _NSStringProxyForContext : NSString {

	NSString* _string;
	NSFormatter* _formatter;
	id<NSCopying><NSSecureCoding><NSObject> _item;

}

@property (copy) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (copy) id item;                              //@synthesize item=_item - In the implementation block
-(void)_retainFormatter:(id)arg1 ;
-(id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)item;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)setItem:(id)arg1 ;
-(NSFormatter *)formatter;
-(void)setFormatter:(NSFormatter *)arg1 ;
@end

