
void FUN_00101f64(undefined8 param_1,undefined8 param_2)

{
  FUN_00102231(param_1,param_2,1);
  return;
}




undefined8 FUN_0010175e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dd4(param_2);
  FUN_00101d83(&local_21,uVar1);
  FUN_00101de6(param_1,&local_21);
  FUN_00101b22(&local_21);
  uVar1 = FUN_00101e6e(param_2);
  uVar2 = FUN_00101e1e(param_2);
                    /* try { // try from 00101c34 to 00101c38 has its CatchHandler @ 00101c3b */
  FUN_00101eba(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102374(long param_1)

{
  FUN_00102442(param_1 + 0x10);
  return;
}




void FUN_00101ca4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010171e(local_20);
    uVar3 = FUN_00101f28(param_1);
    FUN_00101f3a(uVar3,uVar2);
    FUN_00101f64(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001029fb(void)

{
  return;
}




undefined8 FUN_001020f2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a8a(void)

{
  return;
}




void FUN_00102d80(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




undefined8 * FUN_0010218a(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102aab(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101700(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_001027ca(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023bd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102460(param_1,param_2,0);
  return;
}




bool FUN_00102baf(pthread_t *param_1)

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




void FUN_00102288(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023eb(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102396(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101a40(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102a69(void)

{
  return;
}




void FUN_00102a3d(void)

{
  return;
}




void FUN_00102301(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f93(param_3);
  FUN_001023fe(param_1,param_2,uVar1);
  return;
}




void FUN_001024da(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102cc5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101fa6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102264(param_1);
  uVar2 = FUN_00101f28(param_1);
  FUN_00102288(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f93(param_2);
  uVar4 = FUN_0010171e(uVar1);
  FUN_00102301(uVar2,uVar4,uVar3);
  FUN_0010233e(local_38,0);
  FUN_001022c2(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_00101eba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102164(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021ae(&local_18);
    FUN_001021d0(local_10,uVar2);
    FUN_0010218a(&local_18);
  }
  return;
}




void FUN_001029e5(void)

{
  return;
}




void FUN_0010276a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101a76(undefined8 param_1)

{
  FUN_00101b22(param_1);
  return;
}




ulong FUN_001028ce(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025db(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102631(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001029bc(void)

{
  return 0;
}




void FUN_0010153c(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __ptr = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    __ptr[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00102532(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f18(void)

{
  return;
}




void FUN_00101740(undefined8 param_1)

{
  FUN_0010175e(param_1);
  return;
}




void FUN_00101ab6(undefined8 param_1)

{
  FUN_00101a96(param_1);
  return;
}




void FUN_00102532(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a74(void)

{
  return;
}




long FUN_0010233e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101a96(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




undefined8 FUN_00101e6e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102146(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ae2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aab,local_18);
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




void FUN_00101d22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f93(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fa6(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102070(param_1,1);
  return;
}




undefined8 FUN_001023eb(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010166e(param_1);
  FUN_00101d22(param_1,uVar1,param_2);
  return;
}




int FUN_001029cb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b42(undefined8 param_1)

{
  FUN_00101ca4(param_1);
  FUN_00101a76(param_1);
  return;
}




void FUN_00101b22(undefined8 param_1)

{
  FUN_00101c94(param_1);
  return;
}




void FUN_00101c94(void)

{
  return;
}




void FUN_001016de(undefined8 *param_1)

{
  FUN_0010171e(*param_1);
  return;
}




void FUN_00101994(void)

{
  FUN_00101882();
  return;
}




undefined8 FUN_0010166e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101700(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102c2d(undefined8 *param_1)

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




void FUN_00102586(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102a06(void)

{
  return;
}




void FUN_00102360(void)

{
  return;
}




void FUN_00102709(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101882(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab6(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018e1 to 0010191e has its CatchHandler @ 0010196a */
  FUN_00101b6e(local_58,&local_60);
  FUN_00101b6e(local_58,&local_60);
  FUN_00101b6e(local_58,&local_60);
  FUN_00101ba8(local_38,local_58);
                    /* try { // try from 00101926 to 0010192a has its CatchHandler @ 00101955 */
  FUN_0010153c(local_38);
  FUN_00101ad6(local_38);
  FUN_00101ad6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined4 *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  ulong local_1b8;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __ptr = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  for (local_1b8 = 0; local_1b8 < 100; local_1b8 = local_1b8 + 1) {
    __ptr[local_1b8] = *(undefined4 *)((long)local_1a8 + local_1b8 * 4);
  }
  FUN_00102532(*__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010171e(long param_1)

{
  FUN_00101740(param_1 + 0x10);
  return;
}




undefined8 FUN_00101dd4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101de6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f2(param_2);
  FUN_00102104(param_1,uVar1);
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101b42(param_1);
  return;
}




void FUN_00101f3a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221e(param_1,param_2);
  return;
}




undefined8 FUN_00102c0a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102a27(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00102ca6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102070(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_001029ad(void)

{
  return 1;
}




long * FUN_001016ba(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101f28(undefined8 param_1)

{
  return param_1;
}




void FUN_0010221e(void)

{
  return;
}




void FUN_00102264(undefined8 param_1)

{
  FUN_001023bd(param_1,1);
  return;
}




undefined8 FUN_00102164(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102aa0(void)

{
  return;
}




void FUN_00102460(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024c2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001021d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f93(param_2);
  uVar2 = FUN_0010166e(param_1);
  FUN_00101d22(param_1,uVar2,uVar1);
  return;
}




void FUN_001025b0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a32(void)

{
  return;
}




undefined8 FUN_001019a4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024da("Calling good()...");
  FUN_00101994();
  FUN_001024da("Finished good()");
  FUN_001024da("Calling bad()...");
  FUN_00101770();
  FUN_001024da("Finished bad()");
  return 0;
}




void FUN_001020c8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102360(param_1,param_2);
  return;
}




void FUN_00102146(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001024c2(void)

{
  return 0x555555555555555;
}




void FUN_00102737(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102ce4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001026b6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001029f0(void)

{
  return;
}




void FUN_00101770(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab6(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(200);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017cf to 0010180c has its CatchHandler @ 00101858 */
  FUN_00101b6e(local_58,&local_60);
  FUN_00101b6e(local_58,&local_60);
  FUN_00101b6e(local_58,&local_60);
  FUN_00101ba8(local_38,local_58);
                    /* try { // try from 00101814 to 00101818 has its CatchHandler @ 00101843 */
  FUN_00101469(local_38);
  FUN_00101ad6(local_38);
  FUN_00101ad6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024b0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102442(undefined8 param_1)

{
  FUN_001024b0(param_1);
  return;
}




undefined8 FUN_00101d83(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010209a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101e1e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102146(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a11(void)

{
  return;
}




void FUN_0010265c(undefined4 param_1)

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




undefined8 FUN_00101a09(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101c74(undefined8 param_1)

{
  FUN_00101f18(param_1);
  return;
}




void FUN_001022c2(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102231(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001023fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f93(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a09(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001021ae(undefined8 *param_1)

{
  FUN_00102374(*param_1);
  return;
}




void FUN_0010255a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a95(void)

{
  return;
}




void FUN_00101a20(undefined8 param_1)

{
  FUN_00101a40(param_1);
  return;
}




void FUN_00102500(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102606(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a1c(void)

{
  return;
}




void FUN_00102a7f(void)

{
  return;
}




void FUN_001026de(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101af6(undefined8 param_1)

{
  FUN_00101c74(param_1);
  FUN_00101a20(param_1);
  return;
}




void FUN_00101610(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010166e(param_1);
  FUN_001016ba(&local_18);
  FUN_001016de(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102231(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102396(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101f93(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010209a(undefined8 param_1,undefined8 param_2)

{
  FUN_001020c8(param_1,param_2);
  return param_1;
}




void FUN_00102104(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f2(param_2);
  FUN_001020c8(param_1,uVar1);
  FUN_00101a20(param_1);
  return;
}




void FUN_00102a53(void)

{
  return;
}




void FUN_00102a48(void)

{
  return;
}



