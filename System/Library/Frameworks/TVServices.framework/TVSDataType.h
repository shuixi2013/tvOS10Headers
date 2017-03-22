/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVSDataType : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	TVSDataType* _parent;

}

@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) TVSDataType * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)dataTypeWithName:(id)arg1 ;
-(TVSDataType *)parent;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasVideo;
-(BOOL)isKindOf:(id)arg1 ;
-(void)setParent:(TVSDataType *)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
@end

