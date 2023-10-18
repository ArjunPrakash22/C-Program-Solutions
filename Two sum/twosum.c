int main() {
    int n,target,i,j;
    printf("Enter the total number:");
    scanf("%d",&n);
    int nums[n];
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    int found=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(nums[i]+nums[j]==target){
                    printf("[%d,%d]",i,j);
                    found=1;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        printf("not found");
    }
    return 0;
}