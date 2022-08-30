public interface IPlaceable
{
    public IPlacement Placement { get; }
    public void SetPlacement(IPlacement newPlacement);
}
