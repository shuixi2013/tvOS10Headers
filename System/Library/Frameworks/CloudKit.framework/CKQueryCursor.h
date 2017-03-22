/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, CKRecordZoneID;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithData:(id)arg1 zoneID:(id)arg2 ;
-(CKRecordZoneID *)zoneID;
@end
