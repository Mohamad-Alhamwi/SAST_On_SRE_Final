
void FUN_00102ecb(void)

{
  return;
}




void FUN_00101c4e(void)

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
  FUN_00101f72(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101d01 to 00101dd2 has its CatchHandler @ 00101e1e */
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
  FUN_0010202a(local_88,&local_94);
  FUN_0010202a(local_88,&local_94);
  FUN_0010202a(local_88,&local_94);
  FUN_00102064(local_68,local_88);
                    /* try { // try from 00101dda to 00101dde has its CatchHandler @ 00101e09 */
  FUN_00101719(local_68);
  FUN_00101f92(local_68);
  FUN_00101f92(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102ed6(void)

{
  return;
}




void FUN_0010202a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101858(param_1);
  FUN_001021de(param_1,uVar1,param_2);
  return;
}




void FUN_00102376(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102620(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010266a(&local_18);
    FUN_0010268c(local_10,uVar2);
    FUN_00102646(&local_18);
  }
  return;
}




void FUN_00102720(undefined8 param_1)

{
  FUN_00102879(param_1,1);
  return;
}




void FUN_001027bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010244f(param_3);
  FUN_001028ba(param_1,param_2,uVar1);
  return;
}




void FUN_00102150(void)

{
  return;
}




void FUN_001026ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102852(param_1,param_2,param_3);
  return;
}




void FUN_00102eb5(void)

{
  return;
}




undefined8 * FUN_00102646(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001018c8(undefined8 *param_1)

{
  FUN_00101908(*param_1);
  return;
}




void FUN_00102b98(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102bc3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102bf1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fb2(undefined8 param_1)

{
  FUN_00102130(param_1);
  FUN_00101edc(param_1);
  return;
}




bool FUN_00103069(pthread_t *param_1)

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




void FUN_00101f32(undefined8 param_1)

{
  FUN_00101fde(param_1);
  return;
}




void FUN_001022a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ae(param_2);
  FUN_001025c0(param_1,uVar1);
  return;
}




void FUN_00101f92(undefined8 param_1)

{
  FUN_00101ffe(param_1);
  return;
}




void FUN_0010195a(void)

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
  FUN_00101f72(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101a0d to 00101ade has its CatchHandler @ 00101b2a */
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
  FUN_0010202a(local_88,&local_94);
  FUN_0010202a(local_88,&local_94);
  FUN_0010202a(local_88,&local_94);
  FUN_00102064(local_68,local_88);
                    /* try { // try from 00101ae6 to 00101aea has its CatchHandler @ 00101b15 */
  FUN_00101569(local_68);
  FUN_00101f92(local_68);
  FUN_00101f92(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102420(undefined8 param_1,undefined8 param_2)

{
  FUN_001026ed(param_1,param_2,1);
  return;
}




long * FUN_001018a4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001018ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001026da(void)

{
  return;
}




void FUN_00102744(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102462(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102720(param_1);
  uVar2 = FUN_001023e4(param_1);
  FUN_00102744(local_38,uVar2,uVar1);
  uVar3 = FUN_0010244f(param_2);
  uVar4 = FUN_00101908(uVar1);
  FUN_001027bd(uVar2,uVar4,uVar3);
  FUN_001027fa(local_38,0);
  FUN_0010277e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_0010192a(undefined8 param_1)

{
  FUN_00101948(param_1);
  return;
}




void FUN_001029ec(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102e76(void)

{
  return 0;
}




void FUN_00102f23(void)

{
  return;
}




void FUN_0010317f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010297c(void)

{
  return 0x555555555555555;
}




void FUN_0010252c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102852(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102830(long param_1)

{
  FUN_001028fc(param_1 + 0x10);
  return;
}




void FUN_00101fde(undefined8 param_1)

{
  FUN_00102150(param_1);
  return;
}




void FUN_00102a14(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a6a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102602(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102160(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101908(local_20);
    uVar3 = FUN_001023e4(param_1);
    FUN_001023f6(uVar3,uVar2);
    FUN_00102420(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001025c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ae(param_2);
  FUN_00102584(param_1,uVar1);
  FUN_00101edc(param_1);
  return;
}




undefined8 FUN_001030c4(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00102d88(long param_1,ulong param_2,long param_3)

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




ulong FUN_00102c84(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101948(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028a7(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f2e(void)

{
  return;
}




void FUN_00103240(void)

{
  return;
}




undefined8 FUN_00102620(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_0010223f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102556(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101e4b(void)

{
  FUN_00101b57();
  FUN_00101c4e();
  return;
}




void FUN_00102f18(void)

{
  return;
}




void FUN_00102f65(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ee1(void)

{
  return;
}




void FUN_00101719(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017fa(param_1);
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
    FUN_00102994("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ec(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_0010266a(undefined8 *param_1)

{
  FUN_00102830(*param_1);
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




void FUN_00102f0d(void)

{
  return;
}




void FUN_00102879(undefined8 param_1,undefined8 param_2)

{
  FUN_0010291a(param_1,param_2,0);
  return;
}




void FUN_001021de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010244f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102462(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010252c(param_1,1);
  return;
}




undefined8 FUN_00102e67(void)

{
  return 1;
}




void FUN_00102f5a(void)

{
  return;
}




void FUN_00101edc(undefined8 param_1)

{
  FUN_00101efc(param_1);
  return;
}




undefined8 FUN_00102290(undefined8 param_1)

{
  return param_1;
}




void FUN_00101908(long param_1)

{
  FUN_0010192a(param_1 + 0x10);
  return;
}




void FUN_00102e9f(void)

{
  return;
}




undefined8 FUN_0010244f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b70(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103160(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




int FUN_00102e85(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102130(undefined8 param_1)

{
  FUN_001023d4(param_1);
  return;
}




undefined8 FUN_001023e4(undefined8 param_1)

{
  return param_1;
}




long FUN_001027fa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec0)();
  return;
}




void FUN_0010281c(void)

{
  return;
}




void FUN_00101efc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102f02(void)

{
  return;
}




void FUN_00102f39(void)

{
  return;
}




void FUN_001017fa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101858(param_1);
  FUN_001018a4(&local_18);
  FUN_001018c8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010232a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102602(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102556(undefined8 param_1,undefined8 param_2)

{
  FUN_00102584(param_1,param_2);
  return param_1;
}




undefined8 FUN_001025ae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001022da(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102602(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023d4(void)

{
  return;
}




void FUN_001029ba(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101569(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017fa(param_1);
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
    FUN_00102994("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ec(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101b57(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f72(local_58);
  local_5c = 7;
                    /* try { // try from 00101b9b to 00101bd8 has its CatchHandler @ 00101c24 */
  FUN_0010202a(local_58,&local_5c);
  FUN_0010202a(local_58,&local_5c);
  FUN_0010202a(local_58,&local_5c);
  FUN_00102064(local_38,local_58);
                    /* try { // try from 00101be0 to 00101be4 has its CatchHandler @ 00101c0f */
  FUN_00101641(local_38);
  FUN_00101f92(local_38);
  FUN_00101f92(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010268c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010244f(param_2);
  uVar2 = FUN_00101858(param_1);
  FUN_001021de(param_1,uVar2,uVar1);
  return;
}




void FUN_00102ac0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102ef7(void)

{
  return;
}




void FUN_00102994(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102eec(void)

{
  return;
}




undefined8 FUN_00101e60(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102994("Calling good()...");
  FUN_00101e4b();
  FUN_00102994("Finished good()");
  FUN_00102994("Calling bad()...");
  FUN_0010195a();
  FUN_00102994("Finished bad()");
  return 0;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_001014b0();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102584(undefined8 param_1,undefined8 param_2)

{
  FUN_0010281c(param_1,param_2);
  return;
}




undefined8 FUN_00102f9c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102f65,local_18);
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




void FUN_00102a95(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010296a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a40(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102aeb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102eaa(void)

{
  return;
}




void FUN_0010319e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102f44(void)

{
  return;
}




void FUN_00102ec0(void)

{
  return;
}




undefined8 FUN_001030e7(undefined8 *param_1)

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




undefined8 FUN_00101858(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102064(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102290(param_2);
  FUN_0010223f(&local_21,uVar1);
  FUN_001022a2(param_1,&local_21);
  FUN_00101fde(&local_21);
  uVar1 = FUN_0010232a(param_2);
  uVar2 = FUN_001022da(param_2);
                    /* try { // try from 001020f0 to 001020f4 has its CatchHandler @ 001020f7 */
  FUN_00102376(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028fc(undefined8 param_1)

{
  FUN_0010296a(param_1);
  return;
}




void FUN_00102b16(undefined4 param_1)

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




void FUN_0010277e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001026ed(*param_1,param_1[1],1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




undefined8 FUN_00101ec5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ffe(undefined8 param_1)

{
  FUN_00102160(param_1);
  FUN_00101f32(param_1);
  return;
}




void FUN_00102c24(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f4f(void)

{
  return;
}




void FUN_00101641(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017fa(param_1);
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
    FUN_00102994("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001029ec(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_001028ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0010244f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101ec5(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010291a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010297c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101f72(undefined8 param_1)

{
  FUN_00101f52(param_1);
  return;
}




void FUN_00101f52(undefined8 param_1)

{
  FUN_00101fb2(param_1);
  return;
}




void FUN_001023f6(undefined8 param_1,undefined8 param_2)

{
  FUN_001026da(param_1,param_2);
  return;
}



