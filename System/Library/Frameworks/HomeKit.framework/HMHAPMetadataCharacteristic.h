/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataCharacteristic : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _localizedDescription;
	NSString* _type;
	NSString* _format;
	NSString* _unit;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                    //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * format;                            //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * unit;                              //@synthesize unit=_unit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)unit;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)format;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(void)setUnit:(NSString *)arg1 ;
-(void)setChrDescription:(NSString *)arg1 ;
-(NSString *)chrDescription;
@end

