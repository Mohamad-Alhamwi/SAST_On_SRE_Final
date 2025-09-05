
void FUN_00102e6e(void)

{
  return;
}




void FUN_00101e68(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102e79(void)

{
  return;
}




void FUN_0010214a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_001023bb(param_3);
  p_Var2 = (_List_node_base *)FUN_001023ce(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102498(param_1,1);
  return;
}




undefined8 FUN_001023bb(undefined8 param_1)

{
  return param_1;
}




void FUN_00102788(void)

{
  return;
}




void FUN_001027e5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102886(param_1,param_2,0);
  return;
}




void FUN_0010220e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010251a(param_2);
  FUN_0010252c(param_1,uVar1);
  return;
}




long FUN_00102766(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102e58(void)

{
  return;
}




void FUN_0010268c(undefined8 param_1)

{
  FUN_001027e5(param_1,1);
  return;
}




void FUN_001018c6(void)

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
  FUN_00101ede(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101979 to 00101a4a has its CatchHandler @ 00101a96 */
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
  FUN_00101f96(local_88,&local_94);
  FUN_00101f96(local_88,&local_94);
  FUN_00101f96(local_88,&local_94);
  FUN_00101fd0(local_68,local_88);
                    /* try { // try from 00101a52 to 00101a56 has its CatchHandler @ 00101a81 */
  FUN_00101549(local_68);
  FUN_00101efe(local_68);
  FUN_00101efe(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00102cf4(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00102dd3(void)

{
  return 1;
}




undefined8 FUN_00102de2(void)

{
  return 0;
}




void FUN_0010209c(undefined8 param_1)

{
  FUN_00102340(param_1);
  return;
}




void FUN_00103140(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f4a(undefined8 param_1)

{
  FUN_001020bc(param_1);
  return;
}




undefined8 FUN_00102350(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001021fc(param_2);
  FUN_001021ab(&local_21,uVar1);
  FUN_0010220e(param_1,&local_21);
  FUN_00101f4a(&local_21);
  uVar1 = FUN_00102296(param_2);
  uVar2 = FUN_00102246(param_2);
                    /* try { // try from 0010205c to 00102060 has its CatchHandler @ 00102063 */
  FUN_001022e2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e31(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001024f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102788(param_1,param_2);
  return;
}




undefined8 FUN_001018b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ac3(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ede(local_58);
  local_5c = 7;
                    /* try { // try from 00101b07 to 00101b44 has its CatchHandler @ 00101b90 */
  FUN_00101f96(local_58,&local_5c);
  FUN_00101f96(local_58,&local_5c);
  FUN_00101f96(local_58,&local_5c);
  FUN_00101fd0(local_38,local_58);
                    /* try { // try from 00101b4c to 00101b50 has its CatchHandler @ 00101b7b */
  FUN_001015fa(local_38);
  FUN_00101efe(local_38);
  FUN_00101efe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102729(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023bb(param_3);
  FUN_00102826(param_1,param_2,uVar1);
  return;
}




void FUN_0010279c(long param_1)

{
  FUN_00102868(param_1 + 0x10);
  return;
}




void FUN_0010252c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010251a(param_2);
  FUN_001024f0(param_1,uVar1);
  FUN_00101e48(param_1);
  return;
}




void FUN_001016ab(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)FUN_00101766(param_1);
  iVar1 = *piVar2;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102900("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)iVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102958(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001017c4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101856(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101db7(void)

{
  FUN_00101ac3();
  FUN_00101bba();
  return;
}




void FUN_00102a2c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102e2c(void)

{
  return;
}




void FUN_00102ec6(void)

{
  return;
}




void FUN_001029ac(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010256e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102886(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001028e8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102868(undefined8 param_1)

{
  FUN_001028d6(param_1);
  return;
}




void FUN_001020bc(void)

{
  return;
}




void FUN_00102a57(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102adc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102646(void)

{
  return;
}




undefined8 FUN_00102246(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010256e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023bb(param_2);
  uVar2 = FUN_001017c4(param_1);
  FUN_0010214a(param_1,uVar2,uVar1);
  return;
}




void FUN_001031b0(void)

{
  return;
}




void FUN_00102e16(void)

{
  return;
}




void FUN_00102e0b(void)

{
  return;
}




undefined8 FUN_00101dcc(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102900("Calling good()...");
  FUN_00101db7();
  FUN_00102900("Finished good()");
  FUN_00102900("Calling bad()...");
  FUN_001018c6();
  FUN_00102900("Finished bad()");
  return 0;
}




undefined8 FUN_001028e8(void)

{
  return 0x555555555555555;
}




void FUN_00102ed1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102659(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001027be(param_1,param_2,param_3);
  return;
}




void FUN_001022e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010258c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001025d6(&local_18);
    FUN_001025f8(local_10,uVar2);
    FUN_001025b2(&local_18);
  }
  return;
}




void FUN_00101549(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101766(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102958(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102900("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e9e(undefined8 param_1)

{
  FUN_00101f4a(param_1);
  return;
}




void FUN_00102ebb(void)

{
  return;
}




void FUN_001030eb(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102e84(void)

{
  return;
}




void FUN_00101874(long param_1)

{
  FUN_00101896(param_1 + 0x10);
  return;
}




void FUN_001026b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102813(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102eb0(void)

{
  return;
}




undefined8 FUN_001028d6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102296(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010256e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e21(void)

{
  return;
}




void FUN_001030cc(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101efe(undefined8 param_1)

{
  FUN_00101f6a(param_1);
  return;
}




void FUN_00102340(void)

{
  return;
}




void FUN_00101bba(void)

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
  FUN_00101ede(local_88);
  local_94 = -1;
  local_90 = 0xffffffff;
  local_90 = socket(2,1,6);
  if (local_90 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00101c6d to 00101d3e has its CatchHandler @ 00101d8a */
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
  FUN_00101f96(local_88,&local_94);
  FUN_00101f96(local_88,&local_94);
  FUN_00101f96(local_88,&local_94);
  FUN_00101fd0(local_68,local_88);
                    /* try { // try from 00101d46 to 00101d4a has its CatchHandler @ 00101d75 */
  FUN_001016ab(local_68);
  FUN_00101efe(local_68);
  FUN_00101efe(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e42(void)

{
  return;
}




undefined8 FUN_0010251a(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102bf0(long param_1,ulong param_2,long param_3)

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




void FUN_00102e37(void)

{
  return;
}




undefined8 FUN_001021fc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102498(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102813(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f08(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ed1,local_18);
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




void FUN_001015fa(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)FUN_00101766(param_1);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*piVar1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*piVar1 * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00102958(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00102900("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102826(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001023bb(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101e31(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101f1e(undefined8 param_1)

{
  FUN_0010209c(param_1);
  FUN_00101e48(param_1);
  return;
}




void FUN_00102ea5(void)

{
  return;
}




bool FUN_00102fd5(pthread_t *param_1)

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




void FUN_00101896(undefined8 param_1)

{
  FUN_001018b4(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_0010238c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102659(param_1,param_2,1);
  return;
}




undefined8 FUN_0010258c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001025d6(undefined8 *param_1)

{
  FUN_0010279c(*param_1);
  return;
}




void FUN_00102362(undefined8 param_1,undefined8 param_2)

{
  FUN_00102646(param_1,param_2);
  return;
}




undefined8 FUN_001023ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010268c(param_1);
  uVar2 = FUN_00102350(param_1);
  FUN_001026b0(local_38,uVar2,uVar1);
  uVar3 = FUN_001023bb(param_2);
  uVar4 = FUN_00101874(uVar1);
  FUN_00102729(uVar2,uVar4,uVar3);
  FUN_00102766(local_38,0);
  FUN_001026ea(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a01(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101834(undefined8 *param_1)

{
  FUN_00101874(*param_1);
  return;
}




void FUN_00101e48(undefined8 param_1)

{
  FUN_00101e68(param_1);
  return;
}




void FUN_001026ea(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102659(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102b2f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102e9a(void)

{
  return;
}




void FUN_001029d6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102e8f(void)

{
  return;
}




void FUN_00101ebe(undefined8 param_1)

{
  FUN_00101f1e(param_1);
  return;
}




long * FUN_00101810(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 * FUN_001025b2(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010310a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102b04(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102980(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a82(undefined4 param_1)

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




void FUN_00102b5d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102e4d(void)

{
  return;
}




undefined8 FUN_00103030(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102e63(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001021ab(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001024c2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102926(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b90(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00101766(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001017c4(param_1);
  FUN_00101810(&local_18);
  FUN_00101834(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ede(undefined8 param_1)

{
  FUN_00101ebe(param_1);
  return;
}




void FUN_001020cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101874(local_20);
    uVar3 = FUN_00102350(param_1);
    FUN_00102362(uVar3,uVar2);
    FUN_0010238c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001027be(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




int FUN_00102df1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103053(undefined8 *param_1)

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




void FUN_00101856(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102900(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102958(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001017c4(param_1);
  FUN_0010214a(param_1,uVar1,param_2);
  return;
}




void FUN_00101f6a(undefined8 param_1)

{
  FUN_001020cc(param_1);
  FUN_00101e9e(param_1);
  return;
}




undefined8 FUN_001024c2(undefined8 param_1,undefined8 param_2)

{
  FUN_001024f0(param_1,param_2);
  return param_1;
}



