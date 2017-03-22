/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle, NSData, UINibDecoder;

@interface UINibStorage : NSObject {

	NSString* bundleResourceName;
	NSString* bundleDirectoryName;
	NSBundle* bundle;
	NSString* identifierForStringsFile;
	NSData* archiveData;
	UINibDecoder* nibDecoder;
	BOOL instantiatingForSimulator;
	BOOL captureImplicitLoadingContextOnDecode;

}

@property (nonatomic,copy) NSString * bundleResourceName; 
@property (nonatomic,copy) NSString * bundleDirectoryName; 
@property (nonatomic,retain) NSBundle * bundle; 
@property (nonatomic,copy) NSString * identifierForStringsFile; 
@property (nonatomic,copy) NSData * archiveData; 
@property (nonatomic,retain) UINibDecoder * nibDecoder; 
@property (assign,nonatomic) BOOL instantiatingForSimulator; 
@property (assign) BOOL captureImplicitLoadingContextOnDecode; 
-(NSBundle *)bundle;
-(NSString *)bundleResourceName;
-(void)setBundleResourceName:(NSString *)arg1 ;
-(NSString *)bundleDirectoryName;
-(void)setBundleDirectoryName:(NSString *)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)identifierForStringsFile;
-(void)setIdentifierForStringsFile:(NSString *)arg1 ;
-(NSData *)archiveData;
-(void)setArchiveData:(NSData *)arg1 ;
-(UINibDecoder *)nibDecoder;
-(void)setNibDecoder:(UINibDecoder *)arg1 ;
-(BOOL)instantiatingForSimulator;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
@end
