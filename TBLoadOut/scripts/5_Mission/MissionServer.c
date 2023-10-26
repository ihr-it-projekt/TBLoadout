modded class MissionServer {

    private ref TBLOLoadOutLocationBuilder tblo_builder;
    private ref TBLOConfigListener tblo_configListener;
    private ref TBLOLoadOutListener tblo_listener;

	override void OnInit() {
	    super.OnInit();
        tblo_builder = new TBLOLoadOutLocationBuilder;
        tblo_configListener = new TBLOConfigListener;
        tblo_listener = new TBLOLoadOutListener;

        tblo_builder.Create();
    }
}
