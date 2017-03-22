/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SiriCoreSQLiteValue;
@class NSString;

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	id<SiriCoreSQLiteValue> _value;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
+(id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(BOOL)arg2 ;
+(id)notNullColumnConstraintWithName:(id)arg1 ;
+(id)uniqueColumnConstraintWithName:(id)arg1 ;
+(id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)name;
-(long long)type;
-(id<SiriCoreSQLiteValue>)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4 ;
@end

