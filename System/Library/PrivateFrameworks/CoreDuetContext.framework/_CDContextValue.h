/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDate;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying>*<NSSecureCoding> value; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(void)setValue:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
@end
