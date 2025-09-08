
void FUN_00102faf(void)

{
  return;
}




void FUN_00101cb0(undefined8 param_1)

{
  FUN_00101e2e(param_1);
  FUN_00101bda(param_1);
  return;
}




void FUN_00102fba(void)

{
  return;
}




void FUN_00103330(void)

{
  return;
}




undefined8 FUN_00102024(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010238c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022b6(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001025d8(long param_1)

{
  FUN_001026b6(param_1 + 0x10);
  return;
}




void FUN_00102633(undefined8 param_1,undefined8 param_2)

{
  FUN_001026d4(param_1,param_2,0);
  return;
}




void FUN_0010211e(void)

{
  return;
}




void FUN_001025c4(void)

{
  return;
}




void FUN_00102f99(void)

{
  return;
}




void FUN_001024ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102661(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00101bc4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102c5f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102c87(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102cb2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f89(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022e0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010308b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103054,local_18);
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




void FUN_00101e4e(void)

{
  return;
}




void FUN_001021bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001021da(param_3);
  p_Var2 = (_List_node_base *)FUN_001021ec(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001022b6(param_1,1);
  return;
}




void FUN_00101c70(undefined8 param_1)

{
  FUN_00101c50(param_1);
  return;
}




void FUN_0010234a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102338(param_2);
  FUN_0010230e(param_1,uVar1);
  FUN_00101bda(param_1);
  return;
}




undefined8 FUN_00101b5f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102a83("Calling good()...");
  FUN_00101b4a();
  FUN_00102a83("Finished good()");
  FUN_00102a83("Calling bad()...");
  FUN_00101589();
  FUN_00102a83("Finished bad()");
  return 0;
}




void FUN_00101bda(undefined8 param_1)

{
  FUN_00101bfa(param_1);
  return;
}




long FUN_001025a2(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_001025fa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001023aa(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101530) */

void FUN_00101500(void)

{
  return;
}




void FUN_00101c30(undefined8 param_1)

{
  FUN_00101cdc(param_1);
  return;
}




void FUN_00102aa9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102f56(void)

{
  return 1;
}




void FUN_00103007(void)

{
  return;
}




void FUN_0010324f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




long * FUN_00102a3e(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 * FUN_001023d0(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001026d4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102736(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026b6(undefined8 param_1)

{
  FUN_00102724(param_1);
  return;
}




undefined8 FUN_00101fda(undefined8 param_1)

{
  return param_1;
}




void FUN_00102adb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b2f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102495(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010260c(param_1,param_2,param_3);
  return;
}




void FUN_0010212e(long param_1)

{
  FUN_00102464(param_1 + 0x10);
  return;
}




void FUN_00102482(void)

{
  return;
}




bool FUN_00103158(pthread_t *param_1)

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




ulong FUN_00102d73(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d13(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c50(undefined8 param_1)

{
  FUN_00101cb0(param_1);
  return;
}




undefined8 FUN_00102736(void)

{
  return 0x555555555555555;
}




void FUN_00103012(void)

{
  return;
}




void FUN_001032c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001024c8(undefined8 param_1)

{
  FUN_00102633(param_1,1);
  return;
}




void FUN_00102162(undefined8 param_1,undefined8 param_2)

{
  FUN_00102482(param_1,param_2);
  return;
}




void FUN_00101cdc(undefined8 param_1)

{
  FUN_00101e4e(param_1);
  return;
}




void FUN_00102ffc(void)

{
  return;
}




void FUN_00103049(void)

{
  return;
}




void FUN_00102fc5(void)

{
  return;
}




void FUN_001018e5(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c70(local_88);
  local_98 = -1;
  local_90 = 0xffffffff;
  local_94 = -1;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_90,&local_48,0x10);
                    /* try { // try from 001019df to 00101ad1 has its CatchHandler @ 00101b1d */
    if (((iVar1 != -1) && (iVar1 = listen(local_90,5), iVar1 != -1)) &&
       (local_94 = accept(local_90,(sockaddr *)0x0,(socklen_t *)0x0), local_94 != -1)) {
      sVar2 = recv(local_94,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_98 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  if (local_94 != -1) {
    close(local_94);
  }
  FUN_00101d28(local_88,&local_98);
  FUN_00101d28(local_88,&local_98);
  FUN_00101d28(local_88,&local_98);
  FUN_00101d62(local_68,local_88);
                    /* try { // try from 00101ad9 to 00101add has its CatchHandler @ 00101b08 */
  FUN_001028fe(local_68);
  FUN_00101c90(local_68);
  FUN_00101c90(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102526(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102495(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010328d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102ff1(void)

{
  return;
}




undefined8 FUN_00102724(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102150(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102e77(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010303e(void)

{
  return;
}




void FUN_00101d62(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fda(param_2);
  FUN_00101f89(&local_21,uVar1);
  FUN_00101fec(param_1,&local_21);
  FUN_00101cdc(&local_21);
  uVar1 = FUN_00102074(param_2);
  uVar2 = FUN_00102024(param_2);
                    /* try { // try from 00101dee to 00101df2 has its CatchHandler @ 00101df5 */
  FUN_001020c0(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010218c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102495(param_1,param_2,1);
  return;
}




void FUN_00101bfa(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




int FUN_00102f74(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010238c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c05(undefined4 param_1)

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




undefined8 FUN_001031d6(undefined8 *param_1)

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




undefined8 FUN_00102f65(void)

{
  return 0;
}




void FUN_001020c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001023aa(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001023f4(&local_18);
    FUN_00102416(local_10,uVar2);
    FUN_001023d0(&local_18);
  }
  return;
}




void FUN_0010230e(undefined8 param_1,undefined8 param_2)

{
  FUN_001025c4(param_1,param_2);
  return;
}




undefined8 FUN_00102661(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106eb8)();
  return;
}




void FUN_00102674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001021da(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101bc4(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e2e(undefined8 param_1)

{
  FUN_0010211e(param_1);
  return;
}




void FUN_00102fe6(void)

{
  return;
}




void FUN_0010301d(void)

{
  return;
}




void FUN_00101b4a(void)

{
  FUN_001017ee();
  FUN_001018e5();
  return;
}




undefined8 FUN_001021ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024c8(param_1);
  uVar2 = FUN_00102150(param_1);
  FUN_001024ec(local_38,uVar2,uVar1);
  uVar3 = FUN_001021da(param_2);
  uVar4 = FUN_0010212e(uVar1);
  FUN_00102565(uVar2,uVar4,uVar3);
  FUN_001025a2(local_38,0);
  FUN_00102526(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001023f4(undefined8 *param_1)

{
  FUN_001025d8(*param_1);
  return;
}




void FUN_00102464(undefined8 param_1)

{
  FUN_001025fa(param_1);
  return;
}




undefined8 FUN_001021da(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001022e0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010230e(param_1,param_2);
  return param_1;
}




void FUN_00102a83(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101589(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined local_88 [32];
  undefined local_68 [32];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c70(local_88);
  local_98 = -1;
  local_90 = 0xffffffff;
  local_94 = -1;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_90,&local_48,0x10);
                    /* try { // try from 00101683 to 00101775 has its CatchHandler @ 001017c1 */
    if (((iVar1 != -1) && (iVar1 = listen(local_90,5), iVar1 != -1)) &&
       (local_94 = accept(local_90,(sockaddr *)0x0,(socklen_t *)0x0), local_94 != -1)) {
      sVar2 = recv(local_94,local_2e,0xd,0);
      local_8c = (int)sVar2;
      if ((local_8c != -1) && (local_8c != 0)) {
        local_2e[local_8c] = '\0';
        local_98 = atoi(local_2e);
      }
    }
  }
  if (local_90 != -1) {
    close(local_90);
  }
  if (local_94 != -1) {
    close(local_94);
  }
  FUN_00101d28(local_88,&local_98);
  FUN_00101d28(local_88,&local_98);
  FUN_00101d28(local_88,&local_98);
  FUN_00101d62(local_68,local_88);
                    /* try { // try from 0010177d to 00101781 has its CatchHandler @ 001017ac */
  FUN_0010274e(local_68);
  FUN_00101c90(local_68);
  FUN_00101c90(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101c90(undefined8 param_1)

{
  FUN_00101cfc(param_1);
  return;
}




void FUN_00102565(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021da(param_3);
  FUN_00102674(param_1,param_2,uVar1);
  return;
}




void FUN_00102b84(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fdb(void)

{
  return;
}




void FUN_00102a62(undefined8 *param_1)

{
  FUN_0010212e(*param_1);
  return;
}




void FUN_00102fd0(void)

{
  return;
}




void FUN_00101cfc(undefined8 param_1)

{
  FUN_00101e5e(param_1);
  FUN_00101c30(param_1);
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




void FUN_00102416(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021da(param_2);
  uVar2 = FUN_00101edc(param_1);
  FUN_00101f28(param_1,uVar2,uVar1);
  return;
}




void FUN_00103054(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102b59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029e0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101edc(param_1);
  FUN_00102a3e(&local_18);
  FUN_00102a62(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b03(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102baf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102f8e(void)

{
  return;
}




void FUN_0010326e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103028(void)

{
  return;
}




void FUN_00102fa4(void)

{
  return;
}




undefined8 FUN_001031b3(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102074(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010238c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102826(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001029e0(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102a83("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102adb(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102bda(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010260c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e3) */
/* WARNING: Removing unreachable block (ram,0x001014ef) */

void FUN_001014d0(void)

{
  return;
}




void FUN_00101d28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101edc(param_1);
  FUN_00101f28(param_1,uVar1,param_2);
  return;
}




void FUN_00101fec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102338(param_2);
  FUN_0010234a(param_1,uVar1);
  return;
}




void FUN_00102ce0(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103033(void)

{
  return;
}




void FUN_001017ee(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c70(local_58);
  local_5c = 7;
                    /* try { // try from 00101832 to 0010186f has its CatchHandler @ 001018bb */
  FUN_00101d28(local_58,&local_5c);
  FUN_00101d28(local_58,&local_5c);
  FUN_00101d28(local_58,&local_5c);
  FUN_00101d62(local_38,local_58);
                    /* try { // try from 00101877 to 0010187b has its CatchHandler @ 001018a6 */
  FUN_00102826(local_38);
  FUN_00101c90(local_38);
  FUN_00101c90(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010274e(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001029e0(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102a83("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102adb(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001028fe(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001029e0(param_1);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102a83("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102adb(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_00101edc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021bc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e5e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010212e(local_20);
    uVar3 = FUN_00102150(param_1);
    FUN_00102162(uVar3,uVar2);
    FUN_0010218c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102338(undefined8 param_1)

{
  return param_1;
}



