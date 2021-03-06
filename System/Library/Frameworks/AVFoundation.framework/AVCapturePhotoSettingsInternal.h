/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray, NSString;

@interface AVCapturePhotoSettingsInternal : NSObject {

	NSDictionary* format;
	unsigned rawPhotoPixelFormatType;
	long long uniqueID;
	long long flashMode;
	long long HDRMode;
	BOOL autoShallowDepthOfFieldEffectEnabled;
	BOOL originalPhotoDeliveryEnabled;
	BOOL autoStillImageStabilizationEnabled;
	BOOL highResolutionPhotoEnabled;
	NSURL* livePhotoMovieFileURL;
	NSURL* livePhotoMovieFileURLForOriginalPhoto;
	NSArray* livePhotoMovieMetadata;
	NSArray* livePhotoMovieMetadataForOriginalPhoto;
	NSDictionary* previewFormat;
	BOOL squareCropEnabled;
	unsigned shutterSound;
	BOOL turboModeEnabled;
	BOOL autoDualCameraFusionEnabled;
	NSString* livePhotoContentIdentifier;
	NSString* livePhotoContentIdentifierForOriginalPhoto;

}
@end

