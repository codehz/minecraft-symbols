// This file was automatically generated using tools/process_headers.py
// Generated on Wed Jan 10 2018 15:09:27 UTC

#include <hybris/dlfcn.h>

#include "UserManager.h"
static std::unique_ptr<Social::UserManager> (*_Social_UserManager_CreateUserManager)();
std::unique_ptr<Social::UserManager> Social::UserManager::CreateUserManager() {
    return _Social_UserManager_CreateUserManager();
}

#include "Xbox.h"

#include "ServerInstance.h"
static void (NetworkHandler::*_NetworkHandler_NetworkHandler)();
NetworkHandler::NetworkHandler() {
    (this->*_NetworkHandler_NetworkHandler)();
}
static void (ServerInstance::*_ServerInstance_update)();
void ServerInstance::update() {
    (this->*_ServerInstance_update)();
}
static void (ServerInstance::*_ServerInstance_mainThreadNetworkUpdate_HACK)();
void ServerInstance::mainThreadNetworkUpdate_HACK() {
    (this->*_ServerInstance_mainThreadNetworkUpdate_HACK)();
}

#include "OpsList.h"

#include "Mouse.h"
static void (*_Mouse_feed)(char, char, short, short, short, short);
void Mouse::feed(char p1, char p2, short p3, short p4, short p5, short p6) {
    _Mouse_feed(p1, p2, p3, p4, p5, p6);
}

#include "MinecraftCommands.h"
static void (MinecraftCommands::*_MinecraftCommands_setOutputSender)(std::unique_ptr<CommandOutputSender>) const;
void MinecraftCommands::setOutputSender(std::unique_ptr<CommandOutputSender> p1) const {
    (this->*_MinecraftCommands_setOutputSender)(std::move(p1));
}
static MCRESULT (MinecraftCommands::*_MinecraftCommands_requestCommandExecution)(std::unique_ptr<CommandOrigin>, mcpe::string const &, int, bool) const;
MCRESULT MinecraftCommands::requestCommandExecution(std::unique_ptr<CommandOrigin> p1, mcpe::string const & p2, int p3, bool p4) const {
    return (this->*_MinecraftCommands_requestCommandExecution)(std::move(p1), p2, p3, p4);
}

#include "I18n.h"
static mcpe::string (*_I18n_get)(mcpe::string const &, std::vector<mcpe::string> const &);
mcpe::string I18n::get(mcpe::string const & p1, std::vector<mcpe::string> const & p2) {
    return _I18n_get(p1, p2);
}
static void (*_I18n_chooseLanguage)(mcpe::string const &);
void I18n::chooseLanguage(mcpe::string const & p1) {
    _I18n_chooseLanguage(p1);
}
static void (*_I18n_loadLanguages)(ResourcePackManager &, SkinRepository *, mcpe::string const &);
void I18n::loadLanguages(ResourcePackManager & p1, SkinRepository * p2, mcpe::string const & p3) {
    _I18n_loadLanguages(p1, p2, p3);
}

#include "gl.h"
static mcpe::string (*_gl_getOpenGLVendor)();
mcpe::string gl::getOpenGLVendor() {
    return _gl_getOpenGLVendor();
}
static mcpe::string (*_gl_getOpenGLRenderer)();
mcpe::string gl::getOpenGLRenderer() {
    return _gl_getOpenGLRenderer();
}
static mcpe::string (*_gl_getOpenGLVersion)();
mcpe::string gl::getOpenGLVersion() {
    return _gl_getOpenGLVersion();
}
static mcpe::string (*_gl_getOpenGLExtensions)();
mcpe::string gl::getOpenGLExtensions() {
    return _gl_getOpenGLExtensions();
}
static void (*_mce_Platform_OGL_InitBindings)();
void mce::Platform::OGL::InitBindings() {
    _mce_Platform_OGL_InitBindings();
}

#include "ResourcePackStack.h"
static void (PackInstance::*_PackInstance_PackInstance)(ResourcePack *, int, bool);
PackInstance::PackInstance(ResourcePack * p1, int p2, bool p3) {
    (this->*_PackInstance_PackInstance)(p1, p2, p3);
}

#include "MinecraftEventing.h"
static void (MinecraftEventing::*_MinecraftEventing_MinecraftEventing)(mcpe::string const &);
MinecraftEventing::MinecraftEventing(mcpe::string const & p1) {
    (this->*_MinecraftEventing_MinecraftEventing)(p1);
}
static void (MinecraftEventing::*_MinecraftEventing_init)();
void MinecraftEventing::init() {
    (this->*_MinecraftEventing_init)();
}

#include "Api.h"

#include "MinecraftGame.h"
static void (MinecraftGame::*_MinecraftGame_MinecraftGame)(int, char * *);
MinecraftGame::MinecraftGame(int p1, char * * p2) {
    (this->*_MinecraftGame_MinecraftGame)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_destructor)();
MinecraftGame::~MinecraftGame() {
    (this->*_MinecraftGame_destructor)();
}
static void (MinecraftGame::*_MinecraftGame_update)();
void MinecraftGame::update() {
    (this->*_MinecraftGame_update)();
}
static void (MinecraftGame::*_MinecraftGame_setRenderingSize)(int, int);
void MinecraftGame::setRenderingSize(int p1, int p2) {
    (this->*_MinecraftGame_setRenderingSize)(p1, p2);
}
static void (MinecraftGame::*_MinecraftGame_setUISizeAndScale)(int, int, float);
void MinecraftGame::setUISizeAndScale(int p1, int p2, float p3) {
    (this->*_MinecraftGame_setUISizeAndScale)(p1, p2, p3);
}
static std::shared_ptr<Options> (MinecraftGame::*_MinecraftGame_getPrimaryUserOptions)();
std::shared_ptr<Options> MinecraftGame::getPrimaryUserOptions() {
    return (this->*_MinecraftGame_getPrimaryUserOptions)();
}

#include "Keyboard.h"
static void (*_Keyboard_feed)(unsigned char, int);
void Keyboard::feed(unsigned char p1, int p2) {
    _Keyboard_feed(p1, p2);
}
static void (*_Keyboard_feedText)(mcpe::string const &, bool, unsigned char);
void Keyboard::feedText(mcpe::string const & p1, bool p2, unsigned char p3) {
    _Keyboard_feedText(p1, p2, p3);
}

#include "CommandOutput.h"
static std::vector<CommandOutputMessage> const & (CommandOutput::*_CommandOutput_getMessages)() const;
std::vector<CommandOutputMessage> const & CommandOutput::getMessages() const {
    return (this->*_CommandOutput_getMessages)();
}

#include "Scheduler.h"
static Scheduler * (*_Scheduler_singleton)();
Scheduler * Scheduler::singleton() {
    return _Scheduler_singleton();
}

#include "FilePathManager.h"
static void (FilePathManager::*_FilePathManager_FilePathManager)(mcpe::string, bool);
FilePathManager::FilePathManager(mcpe::string p1, bool p2) {
    (this->*_FilePathManager_FilePathManager)(p1, p2);
}

#include "App.h"
static void (App::*_App_init)(AppContext &);
void App::init(AppContext & p1) {
    (this->*_App_init)(p1);
}

#include "ImagePickingCallback.h"

#include "IMinecraftApp.h"

#include "Whitelist.h"

#include "AppPlatform.h"
static void (AppPlatform::*_AppPlatform_AppPlatform)();
AppPlatform::AppPlatform() {
    (this->*_AppPlatform_AppPlatform)();
}
static void (AppPlatform::*_AppPlatform__fireAppFocusGained)();
void AppPlatform::_fireAppFocusGained() {
    (this->*_AppPlatform__fireAppFocusGained)();
}
static void (AppPlatform::*_AppPlatform_initialize)();
void AppPlatform::initialize() {
    (this->*_AppPlatform_initialize)();
}

#include "CommandOutputSender.h"
static std::vector<mcpe::string> (*_CommandOutputSender_translate)(std::vector<mcpe::string> const &);
std::vector<mcpe::string> CommandOutputSender::translate(std::vector<mcpe::string> const & p1) {
    return _CommandOutputSender_translate(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_CommandOutputSender)(Automation::AutomationClient &);
CommandOutputSender::CommandOutputSender(Automation::AutomationClient & p1) {
    (this->*_CommandOutputSender_CommandOutputSender)(p1);
}
static void (CommandOutputSender::*_CommandOutputSender_send)(CommandOrigin const &, CommandOutput const &);
void CommandOutputSender::send(CommandOrigin const & p1, CommandOutput const & p2) {
    (this->*_CommandOutputSender_send)(p1, p2);
}
static void (CommandOutputSender::*_CommandOutputSender_registerOutputCallback)();
void CommandOutputSender::registerOutputCallback() {
    (this->*_CommandOutputSender_registerOutputCallback)();
}

#include "FilePickerSettings.h"

#include "AutomationClient.h"
static void (Automation::AutomationClient::*_Automation_AutomationClient_AutomationClient)(IMinecraftApp &);
Automation::AutomationClient::AutomationClient(IMinecraftApp & p1) {
    (this->*_Automation_AutomationClient_AutomationClient)(p1);
}

#include "ResourcePack.h"
static void (SkinPackKeyProvider::*_SkinPackKeyProvider_SkinPackKeyProvider)();
SkinPackKeyProvider::SkinPackKeyProvider() {
    (this->*_SkinPackKeyProvider_SkinPackKeyProvider)();
}
static void (PackManifestFactory::*_PackManifestFactory_PackManifestFactory)(IPackTelemetry &);
PackManifestFactory::PackManifestFactory(IPackTelemetry & p1) {
    (this->*_PackManifestFactory_PackManifestFactory)(p1);
}
static void (PackSourceFactory::*_PackSourceFactory_PackSourceFactory)(Options *);
PackSourceFactory::PackSourceFactory(Options * p1) {
    (this->*_PackSourceFactory_PackSourceFactory)(p1);
}
static void (ResourcePackRepository::*_ResourcePackRepository_ResourcePackRepository)(MinecraftEventing &, PackManifestFactory &, IContentAccessibilityProvider &, FilePathManager *, PackSourceFactory &);
ResourcePackRepository::ResourcePackRepository(MinecraftEventing & p1, PackManifestFactory & p2, IContentAccessibilityProvider & p3, FilePathManager * p4, PackSourceFactory & p5) {
    (this->*_ResourcePackRepository_ResourcePackRepository)(p1, p2, p3, p4, p5);
}
static void (ContentTierManager::*_ContentTierManager_ContentTierManager)();
ContentTierManager::ContentTierManager() {
    (this->*_ContentTierManager_ContentTierManager)();
}
static void (ResourcePackManager::*_ResourcePackManager_setStack)(std::unique_ptr<ResourcePackStack>, ResourcePackStackType, bool);
void ResourcePackManager::setStack(std::unique_ptr<ResourcePackStack> p1, ResourcePackStackType p2, bool p3) {
    (this->*_ResourcePackManager_setStack)(std::move(p1), p2, p3);
}
static void (ResourcePackManager::*_ResourcePackManager_onLanguageChanged)();
void ResourcePackManager::onLanguageChanged() {
    (this->*_ResourcePackManager_onLanguageChanged)();
}

#include "DedicatedServerCommandOrigin.h"
static void (DedicatedServerCommandOrigin::*_DedicatedServerCommandOrigin_DedicatedServerCommandOrigin)(mcpe::string const &, Minecraft &);
DedicatedServerCommandOrigin::DedicatedServerCommandOrigin(mcpe::string const & p1, Minecraft & p2) {
    (this->*_DedicatedServerCommandOrigin_DedicatedServerCommandOrigin)(p1, p2);
}

#include "MultiplayerService.h"
static void (Social::MultiplayerXBL::*_Social_MultiplayerXBL_MultiplayerXBL)();
Social::MultiplayerXBL::MultiplayerXBL() {
    (this->*_Social_MultiplayerXBL_MultiplayerXBL)();
}

#include "UUID.h"
static mce::UUID (*_mce_UUID_fromString)(mcpe::string const &);
mce::UUID mce::UUID::fromString(mcpe::string const & p1) {
    return _mce_UUID_fromString(p1);
}

#include "Minecraft.h"
static MinecraftCommands * (Minecraft::*_Minecraft_getCommands)();
MinecraftCommands * Minecraft::getCommands() {
    return (this->*_Minecraft_getCommands)();
}

#include "LevelSettings.h"
static void (LevelSettings::*_LevelSettings_LevelSettings)();
LevelSettings::LevelSettings() {
    (this->*_LevelSettings_LevelSettings)();
}
static void (LevelSettings::*_LevelSettings_LevelSettings2)(LevelSettings const &);
LevelSettings::LevelSettings(LevelSettings const & p1) {
    (this->*_LevelSettings_LevelSettings2)(p1);
}

#include "Options.h"
static bool (Options::*_Options_getFullscreen)() const;
bool Options::getFullscreen() const {
    return (this->*_Options_getFullscreen)();
}
static void (Options::*_Options_setFullscreen)(bool);
void Options::setFullscreen(bool p1) {
    (this->*_Options_setFullscreen)(p1);
}

#include "Common.h"
static mcpe::string (*_Common_getGameVersionStringNet)();
mcpe::string Common::getGameVersionStringNet() {
    return _Common_getGameVersionStringNet();
}

void minecraft_symbols_init(void* handle) {
    ((void*&) _Social_UserManager_CreateUserManager) = hybris_dlsym(handle, "_ZN6Social11UserManager17CreateUserManagerEv");
    ((void*&) _NetworkHandler_NetworkHandler) = hybris_dlsym(handle, "_ZN14NetworkHandlerC2Ev");
    ((void*&) _ServerInstance_update) = hybris_dlsym(handle, "_ZN14ServerInstance6updateEv");
    ((void*&) _ServerInstance_mainThreadNetworkUpdate_HACK) = hybris_dlsym(handle, "_ZN14ServerInstance28mainThreadNetworkUpdate_HACKEv");
    ((void*&) _Mouse_feed) = hybris_dlsym(handle, "_ZN5Mouse4feedEccssss");
    ((void*&) _MinecraftCommands_setOutputSender) = hybris_dlsym(handle, "_ZNK17MinecraftCommands15setOutputSenderESt10unique_ptrI19CommandOutputSenderSt14default_deleteIS1_EE");
    ((void*&) _MinecraftCommands_requestCommandExecution) = hybris_dlsym(handle, "_ZNK17MinecraftCommands23requestCommandExecutionESt10unique_ptrI13CommandOriginSt14default_deleteIS1_EERKSsib");
    ((void*&) _I18n_get) = hybris_dlsym(handle, "_ZN4I18n3getERKSsRKSt6vectorISsE");
    ((void*&) _I18n_chooseLanguage) = hybris_dlsym(handle, "_ZN4I18n14chooseLanguageERKSs");
    ((void*&) _I18n_loadLanguages) = hybris_dlsym(handle, "_ZN4I18n13loadLanguagesER19ResourcePackManagerP14SkinRepositoryRKSs");
    ((void*&) _gl_getOpenGLVendor) = hybris_dlsym(handle, "_ZN2gl15getOpenGLVendorEv");
    ((void*&) _gl_getOpenGLRenderer) = hybris_dlsym(handle, "_ZN2gl17getOpenGLRendererEv");
    ((void*&) _gl_getOpenGLVersion) = hybris_dlsym(handle, "_ZN2gl16getOpenGLVersionEv");
    ((void*&) _gl_getOpenGLExtensions) = hybris_dlsym(handle, "_ZN2gl19getOpenGLExtensionsEv");
    ((void*&) _mce_Platform_OGL_InitBindings) = hybris_dlsym(handle, "_ZN3mce8Platform3OGL12InitBindingsEv");
    ((void*&) _PackInstance_PackInstance) = hybris_dlsym(handle, "_ZN12PackInstanceC2EP12ResourcePackib");
    ((void*&) _MinecraftEventing_MinecraftEventing) = hybris_dlsym(handle, "_ZN17MinecraftEventingC2ERKSs");
    ((void*&) _MinecraftEventing_init) = hybris_dlsym(handle, "_ZN17MinecraftEventing4initEv");
    ((void*&) _MinecraftGame_MinecraftGame) = hybris_dlsym(handle, "_ZN13MinecraftGameC2EiPPc");
    ((void*&) _MinecraftGame_destructor) = hybris_dlsym(handle, "_ZN13MinecraftGameD2Ev");
    ((void*&) _MinecraftGame_update) = hybris_dlsym(handle, "_ZN13MinecraftGame6updateEv");
    ((void*&) _MinecraftGame_setRenderingSize) = hybris_dlsym(handle, "_ZN13MinecraftGame16setRenderingSizeEii");
    ((void*&) _MinecraftGame_setUISizeAndScale) = hybris_dlsym(handle, "_ZN13MinecraftGame17setUISizeAndScaleEiif");
    ((void*&) _MinecraftGame_getPrimaryUserOptions) = hybris_dlsym(handle, "_ZN13MinecraftGame21getPrimaryUserOptionsEv");
    ((void*&) _Keyboard_feed) = hybris_dlsym(handle, "_ZN8Keyboard4feedEhi");
    ((void*&) _Keyboard_feedText) = hybris_dlsym(handle, "_ZN8Keyboard8feedTextERKSsbh");
    ((void*&) _CommandOutput_getMessages) = hybris_dlsym(handle, "_ZNK13CommandOutput11getMessagesEv");
    ((void*&) _Scheduler_singleton) = hybris_dlsym(handle, "_ZN9Scheduler9singletonEv");
    ((void*&) _FilePathManager_FilePathManager) = hybris_dlsym(handle, "_ZN15FilePathManagerC2ESsb");
    ((void*&) _App_init) = hybris_dlsym(handle, "_ZN3App4initER10AppContext");
    ((void*&) _AppPlatform_AppPlatform) = hybris_dlsym(handle, "_ZN11AppPlatformC2Ev");
    ((void*&) _AppPlatform__fireAppFocusGained) = hybris_dlsym(handle, "_ZN11AppPlatform19_fireAppFocusGainedEv");
    ((void*&) _AppPlatform_initialize) = hybris_dlsym(handle, "_ZN11AppPlatform10initializeEv");
    ((void*&) _CommandOutputSender_translate) = hybris_dlsym(handle, "_ZN19CommandOutputSender9translateERKSt6vectorISsE");
    ((void*&) _CommandOutputSender_CommandOutputSender) = hybris_dlsym(handle, "_ZN19CommandOutputSenderC2ER10Automation16AutomationClient");
    ((void*&) _CommandOutputSender_send) = hybris_dlsym(handle, "_ZN19CommandOutputSender4sendERK13CommandOriginRK13CommandOutput");
    ((void*&) _CommandOutputSender_registerOutputCallback) = hybris_dlsym(handle, "_ZN19CommandOutputSender22registerOutputCallbackEv");
    ((void*&) _Automation_AutomationClient_AutomationClient) = hybris_dlsym(handle, "_ZN10Automation16AutomationClientC2ER13IMinecraftApp");
    ((void*&) _SkinPackKeyProvider_SkinPackKeyProvider) = hybris_dlsym(handle, "_ZN19SkinPackKeyProviderC2Ev");
    ((void*&) _PackManifestFactory_PackManifestFactory) = hybris_dlsym(handle, "_ZN19PackManifestFactoryC2ER14IPackTelemetry");
    ((void*&) _PackSourceFactory_PackSourceFactory) = hybris_dlsym(handle, "_ZN17PackSourceFactoryC2EP7Options");
    ((void*&) _ResourcePackRepository_ResourcePackRepository) = hybris_dlsym(handle, "_ZN22ResourcePackRepositoryC2ER17MinecraftEventingR19PackManifestFactoryR29IContentAccessibilityProviderP15FilePathManagerR17PackSourceFactory");
    ((void*&) _ContentTierManager_ContentTierManager) = hybris_dlsym(handle, "_ZN18ContentTierManagerC2Ev");
    ((void*&) _ResourcePackManager_setStack) = hybris_dlsym(handle, "_ZN19ResourcePackManager8setStackESt10unique_ptrI17ResourcePackStackSt14default_deleteIS1_EE21ResourcePackStackTypeb");
    ((void*&) _ResourcePackManager_onLanguageChanged) = hybris_dlsym(handle, "_ZN19ResourcePackManager17onLanguageChangedEv");
    ((void*&) _DedicatedServerCommandOrigin_DedicatedServerCommandOrigin) = hybris_dlsym(handle, "_ZN28DedicatedServerCommandOriginC2ERKSsR9Minecraft");
    ((void*&) _Social_MultiplayerXBL_MultiplayerXBL) = hybris_dlsym(handle, "_ZN6Social14MultiplayerXBLC2Ev");
    ((void*&) _mce_UUID_fromString) = hybris_dlsym(handle, "_ZN3mce4UUID10fromStringERKSs");
    ((void*&) _Minecraft_getCommands) = hybris_dlsym(handle, "_ZN9Minecraft11getCommandsEv");
    ((void*&) _LevelSettings_LevelSettings) = hybris_dlsym(handle, "_ZN13LevelSettingsC2Ev");
    ((void*&) _LevelSettings_LevelSettings2) = hybris_dlsym(handle, "_ZN13LevelSettingsC2ERKS_");
    ((void*&) _Options_getFullscreen) = hybris_dlsym(handle, "_ZNK7Options13getFullscreenEv");
    ((void*&) _Options_setFullscreen) = hybris_dlsym(handle, "_ZN7Options13setFullscreenEb");
    ((void*&) _Common_getGameVersionStringNet) = hybris_dlsym(handle, "_ZN6Common23getGameVersionStringNetEv");
}
