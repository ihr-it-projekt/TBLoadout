class TBLOLoadOutPosition {
    vector position;
    vector orientation
    ref array<string> categories;

    void TBLOLoadOutPosition(vector _position, vector _orientation) {
        Init(_position, _orientation);
        categories = new array<string>;
    }

    protected void Init(vector _position, vector _orientation) {
        this.position = _position;
        this.orientation = _orientation;
    }

    void AddCategory(string cat) {
        if(!categories) {
            categories = new array<string>;
        }

        categories.Insert(cat);
    }

    bool IsLoadOut(vector searchPos) {
        return this.position == searchPos;
    }

    bool HasCategory(string searchCat) {
        return -1 != categories.Find(searchCat);
    }

}
