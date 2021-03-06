/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL, NSMutableArray;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSMutableArray* _resizeDestinations;

}

@property (nonatomic,retain) NSMutableArray * resizeDestinations;              //@synthesize resizeDestinations=_resizeDestinations - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)enumerateDestinationsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resizeDestinations;
-(void)setResizeDestinations:(NSMutableArray *)arg1 ;
-(Class)operationClass;
-(id)initWithSourceURL:(id)arg1 ;
-(void)addJPEGDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(void)addDestinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3 ;
@end

