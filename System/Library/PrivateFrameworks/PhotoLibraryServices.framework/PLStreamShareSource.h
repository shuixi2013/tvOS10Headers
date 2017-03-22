/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fileExtension;
-(long long)mediaType;
-(PFVideoComplement *)videoComplement;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
-(NSURL *)mediaURL;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(id)serializedDictionary;
@end

