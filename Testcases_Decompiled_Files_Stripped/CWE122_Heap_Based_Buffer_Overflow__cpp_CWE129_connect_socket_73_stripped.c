
undefined8 FUN_00102e69(void)

{
  return 1;
}




void FUN_001018ca(undefined8 *param_1)

{
  FUN_0010190a(*param_1);
  return;
}




undefined8 FUN_00102e78(void)

{
  return 0;
}




void FUN_001031a0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001030c6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f34(undefined8 param_1)

{
  FUN_00101fe0(param_1);
  return;
}




void FUN_00102162(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010190a(local_20);
    uVar3 = FUN_001023e6(param_1);
    FUN_001023f8(uVar3,uVar2);
    FUN_00102422(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102604(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010266c(undefined8 *param_1)

{
  FUN_00102832(*param_1);
  return;
}




void FUN_00101f94(undefined8 param_1)

{
  FUN_00102000(param_1);
  return;
}




void FUN_001025c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025b0(param_2);
  FUN_00102586(param_1,uVar1);
  FUN_00101ede(param_1);
  return;
}




ulong FUN_00102c86(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010252e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014d0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102a42(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a6c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a97(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101ec7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102f30(void)

{
  return;
}




void FUN_00101b59(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(local_58);
  local_5c = 7;
                    /* try { // try from 00101b9d to 00101bda has its CatchHandler @ 00101c26 */
  FUN_0010202c(local_58,&local_5c);
  FUN_0010202c(local_58,&local_5c);
  FUN_0010202c(local_58,&local_5c);
  FUN_00102066(local_38,local_58);
                    /* try { // try from 00101be2 to 00101be6 has its CatchHandler @ 00101c11 */
  FUN_00101657(local_38);
  FUN_00101f94(local_38);
  FUN_00101f94(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102066(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102292(param_2);
  FUN_00102241(&local_21,uVar1);
  FUN_001022a4(param_1,&local_21);
  FUN_00101fe0(&local_21);
  uVar1 = FUN_0010232c(param_2);
  uVar2 = FUN_001022dc(param_2);
                    /* try { // try from 001020f2 to 001020f6 has its CatchHandler @ 001020f9 */
  FUN_00102378(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e62(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102996("Calling good()...");
  FUN_00101e4d();
  FUN_00102996("Finished good()");
  FUN_00102996("Calling bad()...");
  FUN_0010195c();
  FUN_00102996("Finished bad()");
  return 0;
}




undefined8 FUN_0010185a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ec(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025b0(param_2);
  FUN_001025c2(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_00101589(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102996("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ee(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




undefined8 FUN_001025b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102622(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_0010232c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102604(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101725(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102996("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ee(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_001028bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102451(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101ec7(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102b9a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ed8(void)

{
  return;
}




void FUN_00102f5c(void)

{
  return;
}




void FUN_00102854(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102622(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010266c(&local_18);
    FUN_0010268e(local_10,uVar2);
    FUN_00102648(&local_18);
  }
  return;
}




void FUN_00102722(undefined8 param_1)

{
  FUN_0010287b(param_1,1);
  return;
}




void FUN_001026ef(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102854(param_1,param_2,param_3);
  return;
}




void FUN_00101ede(undefined8 param_1)

{
  FUN_00101efe(param_1);
  return;
}




void FUN_001028fe(undefined8 param_1)

{
  FUN_0010296c(param_1);
  return;
}




undefined8 FUN_0010296c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102451(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fb4(undefined8 param_1)

{
  FUN_00102132(param_1);
  FUN_00101ede(param_1);
  return;
}




void FUN_00102422(undefined8 param_1,undefined8 param_2)

{
  FUN_001026ef(param_1,param_2,1);
  return;
}




void FUN_00102f3b(void)

{
  return;
}




void FUN_00102b18(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102aed(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017fc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010185a(param_1);
  FUN_001018a6(&local_18);
  FUN_001018ca(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102780(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001026ef(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102ee3(void)

{
  return;
}




bool FUN_0010306b(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00102464(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102722(param_1);
  uVar2 = FUN_001023e6(param_1);
  FUN_00102746(local_38,uVar2,uVar1);
  uVar3 = FUN_00102451(param_2);
  uVar4 = FUN_0010190a(uVar1);
  FUN_001027bf(uVar2,uVar4,uVar3);
  FUN_001027fc(local_38,0);
  FUN_00102780(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102000(undefined8 param_1)

{
  FUN_00102162(param_1);
  FUN_00101f34(param_1);
  return;
}




void FUN_001018ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102ecd(void)

{
  return;
}




void FUN_00102f1a(void)

{
  return;
}




int FUN_00102e87(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102558(undefined8 param_1,undefined8 param_2)

{
  FUN_00102586(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102f9e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102f67,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102ec2(void)

{
  return;
}




void FUN_00102746(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101fe0(undefined8 param_1)

{
  FUN_00102152(param_1);
  return;
}




void FUN_00102b72(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102f0f(void)

{
  return;
}




undefined8 FUN_0010194a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001030e9(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_0010202c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010185a(param_1);
  FUN_001021e0(param_1,uVar1,param_2);
  return;
}




void FUN_00101657(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_001017fc(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102996("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ee(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102bf3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001022dc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102604(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a16(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102f51(void)

{
  return;
}




void FUN_00102bc5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f74(undefined8 param_1)

{
  FUN_00101f54(param_1);
  return;
}




undefined8 FUN_00102241(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102558(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010268e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102451(param_2);
  uVar2 = FUN_0010185a(param_1);
  FUN_001021e0(param_1,uVar2,uVar1);
  return;
}




void FUN_001026dc(void)

{
  return;
}




void FUN_0010195c(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101a0f to 00101ae0 has its CatchHandler @ 00101b2c */
    iVar1 = connect(local_90,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_90,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_94 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  FUN_0010202c(local_88,&local_94);
  FUN_0010202c(local_88,&local_94);
  FUN_0010202c(local_88,&local_94);
  FUN_00102066(local_68,local_88);
                    /* try { // try from 00101ae8 to 00101aec has its CatchHandler @ 00101b17 */
  FUN_00101589(local_68);
  FUN_00101f94(local_68);
  FUN_00101f94(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102eb7(void)

{
  return;
}




void FUN_00102eee(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_00102152(void)

{
  return;
}




void FUN_001023d6(void)

{
  return;
}




void FUN_001023f8(undefined8 param_1,undefined8 param_2)

{
  FUN_001026dc(param_1,param_2);
  return;
}




void FUN_00102132(undefined8 param_1)

{
  FUN_001023d6(param_1);
  return;
}




void FUN_001021e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102451(param_3);
  p_Var2 = (_List_node_base *)FUN_00102464(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010252e(param_1,1);
  return;
}




undefined8 FUN_001028a9(undefined8 param_1)

{
  return param_1;
}




long * FUN_001018a6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102586(undefined8 param_1,undefined8 param_2)

{
  FUN_0010281e(param_1,param_2);
  return;
}




void FUN_00102996(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102eac(void)

{
  return;
}




void FUN_0010287b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010291c(param_1,param_2,0);
  return;
}




void FUN_00102ea1(void)

{
  return;
}




void FUN_0010190a(long param_1)

{
  FUN_0010192c(param_1 + 0x10);
  return;
}




undefined8 FUN_001023e6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f25(void)

{
  return;
}




undefined8 FUN_0010297e(void)

{
  return 0x555555555555555;
}




void FUN_00102832(long param_1)

{
  FUN_001028fe(param_1 + 0x10);
  return;
}




void FUN_0010291c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010297e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001029bc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c26(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f67(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ef9(void)

{
  return;
}




ulong FUN_00102d8a(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f46(void)

{
  return;
}




void FUN_00101f54(undefined8 param_1)

{
  FUN_00101fb4(param_1);
  return;
}




long FUN_001027fc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029ee(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00102648(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101efe(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010192c(undefined8 param_1)

{
  FUN_0010194a(param_1);
  return;
}




void FUN_00102ac2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102f04(void)

{
  return;
}




void FUN_001031d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00103181(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106eb8)();
  return;
}




void FUN_001027bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102451(param_3);
  FUN_001028bc(param_1,param_2,uVar1);
  return;
}




void FUN_00103162(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010281e(void)

{
  return;
}




void FUN_00103240(void)

{
  return;
}




void FUN_00101e4d(void)

{
  FUN_00101b59();
  FUN_00101c50();
  return;
}




void FUN_00101c50(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f74(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101d03 to 00101dd4 has its CatchHandler @ 00101e20 */
    iVar1 = connect(local_90,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_90,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_94 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  FUN_0010202c(local_88,&local_94);
  FUN_0010202c(local_88,&local_94);
  FUN_0010202c(local_88,&local_94);
  FUN_00102066(local_68,local_88);
                    /* try { // try from 00101ddc to 00101de0 has its CatchHandler @ 00101e0b */
  FUN_00101725(local_68);
  FUN_00101f94(local_68);
  FUN_00101f94(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00102292(undefined8 param_1)

{
  return param_1;
}



