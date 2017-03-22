/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSMutableDictionary;

@interface ICCameraItemProperties : NSObject {

	ICCameraDevice* _device;
	ICCameraFolder* _parentFolder;
	NSString* _name;
	NSString* _UTI;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	BOOL _locked;
	NSMutableDictionary* _userData;

}

@property (assign) ICCameraDevice * device;                     //@synthesize device=_device - In the implementation block
@property (assign) ICCameraFolder * parentFolder;               //@synthesize parentFolder=_parentFolder - In the implementation block
@property (retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (retain) NSString * UTI;                              //@synthesize UTI=_UTI - In the implementation block
@property (retain) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) BOOL locked;                                 //@synthesize locked=_locked - In the implementation block
@property (retain) NSMutableDictionary * userData;              //@synthesize userData=_userData - In the implementation block
-(void)finalize;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLocked:(BOOL)arg1 ;
-(NSMutableDictionary *)userData;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(ICCameraFolder *)parentFolder;
-(BOOL)locked;
-(void)setParentFolder:(ICCameraFolder *)arg1 ;
-(ICCameraDevice *)device;
-(void)setDevice:(ICCameraDevice *)arg1 ;
@end

