/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject {

	CRCameraReaderOutputInternal* _objectInternal;

}

@property (retain) CRCameraReaderOutputInternal * objectInternal;              //@synthesize objectInternal=_objectInternal - In the implementation block
@property (readonly) NSString * type; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSString * formattedStringValue; 
-(void)dealloc;
-(id)init;
-(NSString *)type;
-(NSString *)stringValue;
-(NSString *)formattedStringValue;
-(void)setObjectInternal:(CRCameraReaderOutputInternal *)arg1 ;
-(CRCameraReaderOutputInternal *)objectInternal;
@end

