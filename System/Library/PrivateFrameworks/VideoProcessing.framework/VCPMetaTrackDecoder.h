/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor;

@interface VCPMetaTrackDecoder : NSObject {

	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _readerOutput;
	AVAssetReaderOutputMetadataAdaptor* _readerOutputAdaptor;

}
-(void)dealloc;
-(long long)status;
-(id)initWithTrack:(id)arg1 ;
-(id)copyNextMetadataGroup;
@end
