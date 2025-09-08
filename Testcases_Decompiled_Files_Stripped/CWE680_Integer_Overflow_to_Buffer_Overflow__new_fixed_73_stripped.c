
void FUN_00101ed0(undefined8 param_1,undefined8 param_2)

{
  FUN_0010219d(param_1,param_2,1);
  return;
}




undefined8 FUN_00101700(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d40(param_2);
  FUN_00101cef(&local_21,uVar1);
  FUN_00101d52(param_1,&local_21);
  FUN_00101a8e(&local_21);
  uVar1 = FUN_00101dda(param_2);
  uVar2 = FUN_00101d8a(param_2);
                    /* try { // try from 00101ba0 to 00101ba4 has its CatchHandler @ 00101ba7 */
  FUN_00101e26(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022e0(long param_1)

{
  FUN_001023ac(param_1 + 0x10);
  return;
}




void FUN_00101c10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016c0(local_20);
    uVar3 = FUN_00101e94(param_1);
    FUN_00101ea6(uVar3,uVar2);
    FUN_00101ed0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102965(void)

{
  return;
}




undefined8 FUN_0010205e(undefined8 param_1)

{
  return param_1;
}




void FUN_001029f4(void)

{
  return;
}




void FUN_00102c80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




undefined8 * FUN_001020f6(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a15(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001016a2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulong FUN_00102734(long param_1,ulong param_2,long param_3)

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




void FUN_00102329(undefined8 param_1,undefined8 param_2)

{
  FUN_001023ca(param_1,param_2,0);
  return;
}




void FUN_001021f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102357(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102302(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001019ac(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001029d3(void)

{
  return;
}




void FUN_001029a7(void)

{
  return;
}




void FUN_0010226d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eff(param_3);
  FUN_0010236a(param_1,param_2,uVar1);
  return;
}




void FUN_00102444(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102c10(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101f12(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001021d0(param_1);
  uVar2 = FUN_00101e94(param_1);
  FUN_001021f4(local_38,uVar2,uVar1);
  uVar3 = FUN_00101eff(param_2);
  uVar4 = FUN_001016c0(uVar1);
  FUN_0010226d(uVar2,uVar4,uVar3);
  FUN_001022aa(local_38,0);
  FUN_0010222e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001029c8(void)

{
  return;
}




void FUN_00101e26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001020d0(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010211a(&local_18);
    FUN_0010213c(local_10,uVar2);
    FUN_001020f6(&local_18);
  }
  return;
}




void FUN_0010294f(void)

{
  return;
}




void FUN_001026d4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001019e2(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




ulong FUN_00102838(long param_1,ulong param_2,long param_3)

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




void FUN_00102545(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010259b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102926(void)

{
  return 0;
}




void FUN_0010151d(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015b2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_0010249c(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_001016e2(undefined8 param_1)

{
  FUN_00101700(param_1);
  return;
}




void FUN_00101a22(undefined8 param_1)

{
  FUN_00101a02(param_1);
  return;
}




void FUN_0010249c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001029de(void)

{
  return;
}




long FUN_001022aa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101a02(undefined8 param_1)

{
  FUN_00101a62(param_1);
  return;
}




undefined8 FUN_00101dda(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020b2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102a4c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a15,local_18);
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




void FUN_00101c8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101eff(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f12(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101fdc(param_1,1);
  return;
}




undefined8 FUN_00102357(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ada(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101610(param_1);
  FUN_00101c8e(param_1,uVar1,param_2);
  return;
}




int FUN_00102935(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101aae(undefined8 param_1)

{
  FUN_00101c10(param_1);
  FUN_001019e2(param_1);
  return;
}




void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101c00(param_1);
  return;
}




void FUN_00101c00(void)

{
  return;
}




void FUN_00101680(undefined8 *param_1)

{
  FUN_001016c0(*param_1);
  return;
}




void FUN_00101900(void)

{
  FUN_00101809();
  return;
}




undefined8 FUN_00101610(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016a2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b74(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001024f0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102970(void)

{
  return;
}




void FUN_001022cc(void)

{
  return;
}




void FUN_00102673(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101809(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a22(local_58);
  local_5c = 0x14;
                    /* try { // try from 0010184d to 0010188a has its CatchHandler @ 001018d6 */
  FUN_00101ada(local_58,&local_5c);
  FUN_00101ada(local_58,&local_5c);
  FUN_00101ada(local_58,&local_5c);
  FUN_00101b14(local_38,local_58);
                    /* try { // try from 00101892 to 00101896 has its CatchHandler @ 001018c1 */
  FUN_0010151d(local_38);
  FUN_00101a42(local_38);
  FUN_00101a42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101489(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_001015b2(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_0010249c(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001016c0(long param_1)

{
  FUN_001016e2(param_1 + 0x10);
  return;
}




undefined8 FUN_00101d40(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010205e(param_2);
  FUN_00102070(param_1,uVar1);
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  FUN_00101aae(param_1);
  return;
}




void FUN_00101ea6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010218a(param_1,param_2);
  return;
}




bool FUN_00102b19(pthread_t *param_1)

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




void FUN_00102991(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




undefined8 FUN_00102b97(undefined8 *param_1)

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




void FUN_00101fdc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102917(void)

{
  return 1;
}




long * FUN_0010165c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00101e94(undefined8 param_1)

{
  return param_1;
}




void FUN_0010218a(void)

{
  return;
}




void FUN_001021d0(undefined8 param_1)

{
  FUN_00102329(param_1,1);
  return;
}




undefined8 FUN_001020d0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a0a(void)

{
  return;
}




void FUN_001023ca(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010242c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010213c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101eff(param_2);
  uVar2 = FUN_00101610(param_1);
  FUN_00101c8e(param_1,uVar2,uVar1);
  return;
}




void FUN_0010251a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010299c(void)

{
  return;
}




undefined8 FUN_00101910(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102444("Calling good()...");
  FUN_00101900();
  FUN_00102444("Finished good()");
  FUN_00102444("Calling bad()...");
  FUN_00101712();
  FUN_00102444("Finished bad()");
  return 0;
}




void FUN_00102034(undefined8 param_1,undefined8 param_2)

{
  FUN_001022cc(param_1,param_2);
  return;
}




void FUN_001020b2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010242c(void)

{
  return 0x555555555555555;
}




void FUN_001026a1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102c4e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102c2f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102cf0(void)

{
  return;
}




void FUN_00102620(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010295a(void)

{
  return;
}




void FUN_00101712(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a22(local_58);
  local_5c = 0x40000001;
                    /* try { // try from 00101756 to 00101793 has its CatchHandler @ 001017df */
  FUN_00101ada(local_58,&local_5c);
  FUN_00101ada(local_58,&local_5c);
  FUN_00101ada(local_58,&local_5c);
  FUN_00101b14(local_38,local_58);
                    /* try { // try from 0010179b to 0010179f has its CatchHandler @ 001017ca */
  FUN_00101489(local_38);
  FUN_00101a42(local_38);
  FUN_00101a42(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010241a(undefined8 param_1)

{
  return param_1;
}




void FUN_001023ac(undefined8 param_1)

{
  FUN_0010241a(param_1);
  return;
}




undefined8 FUN_00101cef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102006(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101d8a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020b2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010297b(void)

{
  return;
}




void FUN_001025c6(undefined4 param_1)

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




undefined8 FUN_00101975(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101be0(undefined8 param_1)

{
  FUN_00101e84(param_1);
  return;
}




void FUN_0010222e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010219d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010236a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101eff(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101975(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010211a(undefined8 *param_1)

{
  FUN_001022e0(*param_1);
  return;
}




void FUN_001024c4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029ff(void)

{
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_001019ac(param_1);
  return;
}




void FUN_0010246a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102570(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102986(void)

{
  return;
}




void FUN_001029e9(void)

{
  return;
}




void FUN_00102648(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a62(undefined8 param_1)

{
  FUN_00101be0(param_1);
  FUN_0010198c(param_1);
  return;
}




void FUN_001015b2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101610(param_1);
  FUN_0010165c(&local_18);
  FUN_00101680(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010219d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102302(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101eff(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102006(undefined8 param_1,undefined8 param_2)

{
  FUN_00102034(param_1,param_2);
  return param_1;
}




void FUN_00102070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010205e(param_2);
  FUN_00102034(param_1,uVar1);
  FUN_0010198c(param_1);
  return;
}




void FUN_001029bd(void)

{
  return;
}




void FUN_001029b2(void)

{
  return;
}



