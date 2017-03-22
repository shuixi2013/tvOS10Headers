/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHSSDataServerID, NSString;

@interface TVHSSDataServerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	unsigned _sharingProtocolVersion;
	unsigned _daapProtocolVersion;
	unsigned _dpapProtocolVersion;
	unsigned _clientSharingProtocolVersion;
	TVHSSDataServerID* _serverID;
	NSString* _displayName;
	unsigned long long _serverType;
	unsigned long long _supportedExtensions;

}

@property (nonatomic,retain) TVHSSDataServerID * serverID;                                             //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned sharingProtocolVersion;                                          //@synthesize sharingProtocolVersion=_sharingProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned short sharingProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short sharingProtocolMinorVersion; 
@property (assign,nonatomic) unsigned long long serverType;                                            //@synthesize serverType=_serverType - In the implementation block
@property (assign,setter=setDAAPProtocolVersion:,nonatomic) unsigned daapProtocolVersion;              //@synthesize daapProtocolVersion=_daapProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned short daapProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short daapProtocolMinorVersion; 
@property (assign,setter=setDPAPProtocolVersion:,nonatomic) unsigned dpapProtocolVersion;              //@synthesize dpapProtocolVersion=_dpapProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned short dpapProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short dpapProtocolMinorVersion; 
@property (assign,nonatomic) unsigned clientSharingProtocolVersion;                                    //@synthesize clientSharingProtocolVersion=_clientSharingProtocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned short clientSharingProtocolMajorVersion; 
@property (nonatomic,readonly) unsigned short clientSharingProtocolMinorVersion; 
@property (assign,nonatomic) unsigned long long supportedExtensions;                                   //@synthesize supportedExtensions=_supportedExtensions - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned short)_majorProtocolVersion:(unsigned)arg1 ;
+(unsigned short)_minorProtocolVersion:(unsigned)arg1 ;
+(BOOL)_supportsProtocolMajorVersion:(unsigned)arg1 minorVersion:(unsigned)arg2 currentMajorVersion:(unsigned)arg3 currentMinorVersion:(unsigned)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setServerType:(unsigned long long)arg1 ;
-(BOOL)queryFilterSupportsProperty:(id)arg1 ;
-(BOOL)groupingSupportsProperty:(id)arg1 ;
-(unsigned long long)serverType;
-(void)setServerID:(TVHSSDataServerID *)arg1 ;
-(TVHSSDataServerID *)serverID;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(unsigned long long)_initialServerType;
-(BOOL)_supportsSharingProtocolMajorVersion:(unsigned)arg1 minorVersion:(unsigned)arg2 ;
-(BOOL)_supportsDAAPProtocolMajorVersion:(unsigned)arg1 minorVersion:(unsigned)arg2 ;
-(void)setSharingProtocolVersion:(unsigned)arg1 ;
-(void)setDAAPProtocolVersion:(unsigned)arg1 ;
-(void)setDPAPProtocolVersion:(unsigned)arg1 ;
-(void)setClientSharingProtocolVersion:(unsigned)arg1 ;
-(void)setSupportedExtensions:(unsigned long long)arg1 ;
-(unsigned)sharingProtocolVersion;
-(unsigned)daapProtocolVersion;
-(unsigned)dpapProtocolVersion;
-(unsigned)clientSharingProtocolVersion;
-(unsigned long long)supportedExtensions;
-(unsigned short)daapProtocolMajorVersion;
-(unsigned short)daapProtocolMinorVersion;
-(unsigned short)dpapProtocolMajorVersion;
-(unsigned short)dpapProtocolMinorVersion;
-(unsigned short)sharingProtocolMajorVersion;
-(unsigned short)sharingProtocolMinorVersion;
-(id)initWithServerID:(id)arg1 displayName:(id)arg2 sharingProtocolVersion:(unsigned)arg3 ;
-(unsigned short)clientSharingProtocolMajorVersion;
-(unsigned short)clientSharingProtocolMinorVersion;
-(BOOL)_supportsDPAPProtocolMajorVersion:(unsigned)arg1 minorVersion:(unsigned)arg2 ;
@end

