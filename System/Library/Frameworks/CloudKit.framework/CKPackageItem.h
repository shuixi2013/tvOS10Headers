/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject {

	int _sectionIndex;
	long long _packageIndex;
	NSURL* _fileURL;
	unsigned long long _itemID;
	NSData* _signature;
	long long _size;
	long long _offset;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSData* _wrappedAssetKey;

}

@property (assign,nonatomic) long long packageIndex;                 //@synthesize packageIndex=_packageIndex - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) long long size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) int sectionIndex;                       //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                    //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                      //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;               //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
-(long long)size;
-(id)description;
-(void)setSize:(long long)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)setSectionIndex:(int)arg1 ;
-(int)sectionIndex;
-(id)CKPropertiesDescription;
-(NSNumber *)fileID;
-(NSNumber *)generationID;
-(void)setFileID:(NSNumber *)arg1 ;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSData *)wrappedAssetKey;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(long long)packageIndex;
-(void)setPackageIndex:(long long)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(unsigned long long)itemID;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
@end

